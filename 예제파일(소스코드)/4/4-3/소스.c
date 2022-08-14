#include <iostream>

#if defined(_M_IX86)
#pragma comment(linker, "/INCLUDE:_mainCRTStartup")
#else
#pragma comment(linker, "/INCLUDE:mainCRTStartup")
#endif

int main()
{
	std::cout << "C++";
	std::cout << 22;
}
