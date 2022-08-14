#include <Windows.h>

int main()
{
	MessageBoxA(0, "ANSI한글", "ANSI", 0);
	MessageBoxW(0, L"WIDE CHAR한글", L"WIDE CHAR", 0);
}