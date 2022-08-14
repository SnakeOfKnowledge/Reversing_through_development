#include <Windows.h>

int main()
{
	HMODULE hMoudle = LoadLibraryA("msg.dll");
	FARPROC func = GetProcAddress(hMoudle, "Hello_World_msg");
	func();
}