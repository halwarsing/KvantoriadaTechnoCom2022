// Copyright Epic Games, Inc. All Rights Reserved.

#include "HalKvantoriadaPluginBPLibrary.h"
#include "HalKvantoriadaPlugin.h"

FSocket* socket;
TSharedPtr<FJsonObject> JsonParsed;
FOnReceiveData OnReceiveData;

UHalKvantoriadaPluginBPLibrary::UHalKvantoriadaPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UHalKvantoriadaPluginBPLibrary::Connect(FString ip, int32 port)
{
	TSharedPtr<FInternetAddr> iaddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();

	bool bIsValid;
	iaddr->SetIp(*ip, bIsValid);
	iaddr->SetPort(port);

	socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream,ip,false);

	bool bIsConnected = socket->Connect(*iaddr);

	return bIsConnected;
}

void UHalKvantoriadaPluginBPLibrary::Receive(int32 Size)
{
	if (socket!=nullptr && socket->GetConnectionState() == ESocketConnectionState::SCS_Connected) {
		FSocket* sock = socket;
		AsyncTask(ENamedThreads::AnyHiPriThreadNormalTask, [sock, Size]()
			{
				TArray<uint8> ReceivedBytes;
				int32 BytesRead;
				ReceivedBytes.Init(0, Size);
				sock->Recv(ReceivedBytes.GetData(), ReceivedBytes.Num(), BytesRead);
				AsyncTask(ENamedThreads::GameThread, [ReceivedBytes,BytesRead]() {
					if (BytesRead == 0) {
						Close();
						return;
					}
					OnReceiveData.ExecuteIfBound(ByteArrayToString(ReceivedBytes)); });
			});
	}
}

void UHalKvantoriadaPluginBPLibrary::Close()
{
	UHalKvantoriadaPluginBPLibrary::SendData(StringToByteArray(FString(TEXT("CLOSE"))));
	socket->Close();
}

int32 UHalKvantoriadaPluginBPLibrary::SendData(const TArray<uint8> data)
{
	int32 BytesSent = 0;
	socket->Send(data.GetData(), data.Num(), BytesSent);
	return BytesSent;
}

TArray<uint8> UHalKvantoriadaPluginBPLibrary::StringToByteArray(const FString str)
{
	uint32 size = str.Len();
	TArray<uint8> out;
	out.AddUninitialized(size);
	uint8* BytesPtr = out.GetData();
	char* cstr = TCHAR_TO_ANSI(*str);
	for (uint32 i = 0; i < size; i++) { BytesPtr[i] = cstr[i]; }
	return out;
}

FString UHalKvantoriadaPluginBPLibrary::ByteArrayToString(const TArray<uint8> ByteArray)
{
	return FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(ByteArray.GetData())));
}

void UHalKvantoriadaPluginBPLibrary::ParseJson(FString str)
{
	TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(str);
	if (FJsonSerializer::Deserialize(JsonReader, JsonParsed)) { UE_LOG(LogTemp, Warning, TEXT("Successful Parsing Json")); }
}

FString UHalKvantoriadaPluginBPLibrary::GetStringFromJson(FString key)
{
	return JsonParsed->GetStringField(key);
}

int32 UHalKvantoriadaPluginBPLibrary::GetIntegerFromJson(FString key)
{
	return JsonParsed->GetIntegerField(key);
}

float UHalKvantoriadaPluginBPLibrary::GetFloatFromJson(FString key)
{
	return JsonParsed->GetNumberField(key);
}

FString UHalKvantoriadaPluginBPLibrary::UEStringToNormalString(FString s) {
	char* ca = TCHAR_TO_ANSI(*s);
	char* out = (char*)FMemory::Malloc(strlen(ca) + 1);
	bool isSpecialChar = false;
	unsigned int i, b;
	for (i = 0, b = 0; i < strlen(ca); i++) {
		if (isSpecialChar == true) {
			if (ca[i] == 'r') {
				out[b] = '\r';
			}
			else if (ca[i] == 'n') {
				out[b] = '\n';
			}
			else {
				out[b] = ca[i];
			}
			isSpecialChar = false;
			b++;
		}
		else if (ca[i] == '\\') {
			isSpecialChar = true;
		}
		else {
			out[b] = ca[i];
			b++;
		}
	}
	b++;
	out = (char*)FMemory::Realloc(out, b);
	out[b - 1] = '\0';
	return FString(ANSI_TO_TCHAR(out));
}

void UHalKvantoriadaPluginBPLibrary::ReceiveHalDevice()
{
	SendData(StringToByteArray(FString(TEXT("READ"))));
	Receive(2048);
}

void UHalKvantoriadaPluginBPLibrary::StartHalDevice(FString ip,const FOnReceiveData& ord)
{
	if (Connect(ip, 47)) {
		OnReceiveData = ord;
		SendData(StringToByteArray("READ"));
		Receive(2048);
	}
}