#include <Windows.h>

int main()
{
	HMODULE hMoudle = LoadLibraryA("msg.dll");
	FARPROC func = hMoudle + 0x100C;
	func();
}