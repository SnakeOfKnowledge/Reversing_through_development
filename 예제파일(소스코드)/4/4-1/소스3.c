#if defined(_M_IX86)
#pragma comment(linker, "/INCLUDE:_mainCRTStartup")
#else
#pragma comment(linker, "/INCLUDE:mainCRTStartup")
#endif
#include <stdio.h>

int main()
{
	printf("");
}