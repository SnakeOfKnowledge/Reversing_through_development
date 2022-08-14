#include <stdio.h>

void print(int num)
{
	printf("%d\n", num);
}
void print(const char* string)
{
	printf("%s\n", string);
}
void print(float f)
{
	printf("%f\n", f);
}

int main()
{
	print(1);
	print("a");
	print(1.0f);
}