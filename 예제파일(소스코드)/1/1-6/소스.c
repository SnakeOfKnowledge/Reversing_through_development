#include <stdio.h>
#include <stdlib.h>

int main()
{
	int �������� = 777;
	int* �������� = malloc(sizeof(int));
	int* ��������2 = malloc(sizeof(int) * 2);
	*�������� = 100;
	*��������2 = 200;
	*(��������2 + 1) = 300;
	printf("%d %d %d %d", ��������, *��������, *��������2, *(��������2 + 1));
}