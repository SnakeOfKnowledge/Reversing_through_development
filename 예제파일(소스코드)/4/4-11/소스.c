#include <iostream>

template <typename T>
void print(T var)
{
	std::cout << var << std::endl;
}

int main()
{
	print(1);
	print(1.0f);
	print("String");
}