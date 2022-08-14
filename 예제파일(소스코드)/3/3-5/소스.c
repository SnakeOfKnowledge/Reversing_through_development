#include <Windows.h>

int main()
{
	MessageBoxA(0, "ANSI", "ANSI", 0);
	MessageBoxW(0, L"WIDE CHAR", L"WIDE CHAR", 0);
}