#include <stdio.h>
#include <stdlib.h>

int main()
{
	int 지역변수 = 777;
	int* 동적변수 = malloc(sizeof(int));
	int* 동적변수2 = malloc(sizeof(int) * 2);
	*동적변수 = 100;
	*동적변수2 = 200;
	*(동적변수2 + 1) = 300;
	printf("%d %d %d %d", 지역변수, *동적변수, *동적변수2, *(동적변수2 + 1));
}