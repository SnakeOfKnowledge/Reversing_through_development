#include <stdio.h>

void print_num(int num = 0)
{
	printf("%d\n", num);
}

int main()
{
	print_num();
	print_num(1);
}