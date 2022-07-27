#include <SoftwareSerial.h>
#include <OneWire.h>
#include <ArduinoJson.h>
#include <DallasTemperature.h>
#include <TroykaIMU.h>
#include <TroykaMQ.h>
#include <TroykaThermometer.h>
#include <iarduino_SensorPulse.h>

#define ONE_WIRE_BUS 3
#define PIN_MQ9_1 A0
#define PIN_MQ9_2 A1
#define PIN_MQ9_HEATER_1 4
#define PIN_MQ9_HEATER_2 11
#define RX 5
#define TX 10
#define PULSE_SENSOR A3

OneWire ds18b20_OneWire(ONE_WIRE_BUS);

DallasTemperature ds18b20_sensor(&ds18b20_OneWire);

Compass compass;

OneWire ds(2);

SoftwareSerial esp8266(RX,TX);

MQ9 mq9_1(PIN_MQ9_1,PIN_MQ9_1);
MQ9 mq9_2(PIN_MQ9_2,PIN_MQ9_2);

TroykaThermometer thermometer(A2);

iarduino_SensorPulse Pulse(PULSE_SENSOR);

String connectionId="0";
unsigned long long startTime;
char json_str[256];
DynamicJsonDocument json_doc(256);
int pulse=0;

void setup() {
  Serial.begin(9600);
  esp8266.begin(8000);
  compass.begin();
  ds18b20_sensor.begin();
  ds18b20_sensor.setResolution(12);
  mq9_1.cycleHeat();
  mq9_2.cycleHeat();
  Pulse.begin();
  //esp8266.println("AT+RESTORE");
  //sendCommand("AT+UART_CUR=8000,8,1,0,0",5,"OK");
  //sendCommand("AT+UART_DEF=9600,8,1,0,0",5,"OK");
  sendCommand("AT",5,"OK");
  sendCommand("AT+CWMODE=2", 5, "OK");
  sendCommand("AT+CWSAP=\"HalwarsingNet\",\"0497081997\",5,3",5,"OK");
  sendCommand("AT+CIPAP_CUR=\"47.47.47.47\"",5,"OK");
  //esp8266.println("AT+CWLAP");
  //sendCommand("AT+CWJAP_CUR=\"Teremok\",\"74746026\",\"CE:58:C9:D7:FE:27\"",5,"OK");
  sendCommand("AT+CIPMUX=1",1,"OK");
  sendCommand("AT+CIPSERVER=1,47",5,"OK");
  //sendCommand("AT+CWSAP=\"HalwarsingNet\",\"0497081997\",5,3",5,"OK");
  
  //char* ipret=sendCommandWithReturn("AT+CIFSR");
  //Serial.println(ipret);
  //free(ipret);

  json_doc["LPG1"]=0;
  json_doc["Methane1"]=0;
  json_doc["CarbonMonoxide1"]=0;
  json_doc["LPG2"]=0;
  json_doc["Methane2"]=0;
  json_doc["CarbonMonoxide2"]=0;
}

bool sendCommand(String cmd,int maxTime,char readReplay[]) {
  Serial.print("Command: ");
  Serial.print(cmd);
  int countTime=0;
  bool found=false;
  while (countTime<maxTime) {
    esp8266.println(cmd);
    if (esp8266.find(readReplay))
    {
      found=true;
      break;
    }
    countTime++;
  }

  if (found)
  {
    Serial.println(" OK");
  } else {
    Serial.println(" Fail");
  }
  return found;
}

/*char* sendCommandWithReturn(String cmd) {
  char* out=calloc(256,sizeof(char));
  esp8266.println(cmd);
  if (esp8266.available()>0) {esp8266.readBytes(out,255);}
  return out;
}*/

String getDataInfo(String data,String& connectionId)
{
   int indexConnectionId=data.indexOf(',');
   int indexDataSize=data.substring(indexConnectionId+1).indexOf(':')+indexConnectionId+1;
   connectionId=data.substring(0,indexConnectionId);
   return data.substring(indexDataSize+1);
}

void loop() {
  if (!mq9_1.isCalibrated()&&mq9_1.atHeatCycleEnd()) {
    mq9_1.calibrate();
    mq9_1.cycleHeat();
  }
  if (!mq9_2.isCalibrated()&&mq9_2.atHeatCycleEnd()) {
    mq9_2.calibrate();
    mq9_2.cycleHeat();
  }

  if (mq9_1.isCalibrated()&&mq9_1.atHeatCycleEnd()) {
     json_doc["LPG1"]=mq9_1.readLPG();
     json_doc["Methane1"]=mq9_1.readMethane();
     json_doc["CarbonMonoxide1"]=mq9_1.readCarbonMonoxide();
     mq9_1.cycleHeat();
  }
  if (mq9_2.isCalibrated()&&mq9_2.atHeatCycleEnd()) {
     json_doc["LPG2"]=mq9_2.readLPG();
     json_doc["Methane2"]=mq9_2.readMethane();
     json_doc["CarbonMonoxide2"]=mq9_2.readCarbonMonoxide();
     mq9_2.cycleHeat();
  }

  if (Pulse.check(ISP_VALID)==ISP_CONNECTED) {
    //Serial.print("PULSE SENSOR: ");
    //Serial.println(Pulse.check(ISP_PULSE));
    pulse=Pulse.check(ISP_PULSE);
  }
  
  if (esp8266.available()>0){
    if(esp8266.find("+IPD,")) {
      String data=getDataInfo(esp8266.readString(),connectionId);
      Serial.print("Connection ID: ");Serial.println(connectionId);
      Serial.print("Data:          ");Serial.println(data);

      while (true) {
        Serial.println(data);
        if (data=="READ") {
          ds18b20_sensor.requestTemperatures();
          thermometer.read();
          json_doc["temperature"]=ds18b20_sensor.getTempCByIndex(0);
          json_doc["compassX"]=compass.readMagneticGaussX();
          json_doc["compassY"]=compass.readMagneticGaussY();
          json_doc["compassZ"]=compass.readMagneticGaussZ();
          json_doc["thermometer"]=thermometer.getTemperatureC();
          json_doc["pulse"]=pulse;
          memset(json_str,0,256);
          serializeJson(json_doc,json_str);
          Serial.println(json_str);
          String cipSend="AT+CIPSEND=0,";
          cipSend+=strlen(json_str);
          sendCommand(cipSend,4,">");
          esp8266.println(json_str);
        } else if (data=="CLOSE") {
          break;
        } else {
          break;
        }
        startTime=millis();
        while (millis()-startTime<10000) {
          if (esp8266.available()>0) {
            if (esp8266.find("+IPD,")) {
              data=getDataInfo(esp8266.readString(),connectionId);
              startTime=-1;
              break;
            }
          }
        }
        if (startTime!=-1) {
          break;
        }
      }
      espclose();
    }
  }
}

void espsend(String data)
{
  String cipSend="AT+CIPSEND=0,";
  cipSend+=data.length();
  sendCommand(cipSend,4,">");
  esp8266.println(data);
}

void espclose()
{
  sendCommand("AT+CIPCLOSE=0",5,"OK");
}
