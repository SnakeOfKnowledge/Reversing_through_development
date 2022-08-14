#include <stdio.h>
#include <stdlib.h>

int main()
{
	int 지역변수;
	int* 동적변수 = malloc(sizeof(int));
	int* 동적변수2 = malloc(sizeof(int) * 10);
	free(동적변수);
	free(동적변수2);
}