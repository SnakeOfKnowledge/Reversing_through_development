#include <stdio.h>
int add(int, int);

int main()
{
	printf("%d", add(76, 1));
}
int add(int x, int y)
{
	return x + y;
}