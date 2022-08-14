#include <stdio.h>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto y : x)
		printf("%d\n", y);
}