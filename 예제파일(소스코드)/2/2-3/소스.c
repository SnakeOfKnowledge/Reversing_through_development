#include <stdio.h>
int ����[255];
int SP = 0;
int BP = 0;
void push(int value)
{
	����[SP] = value;
	SP++;
}
int pop()
{
	--SP;
	return ����[SP];
}
int main()
{
	push(1);
	printf("%d", pop());
}