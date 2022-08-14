#include <stdio.h>

int sum(int, int);

int main()
{
	int 지역변수 = sum(1, 2);
	printf("%d\n", 지역변수, sum(2, 2));
}

int sum(int a, int b)
{
	return a + b;
}