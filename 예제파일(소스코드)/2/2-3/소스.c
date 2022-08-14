#include <stdio.h>
int 스택[255];
int SP = 0;
int BP = 0;
void push(int value)
{
	스택[SP] = value;
	SP++;
}
int pop()
{
	--SP;
	return 스택[SP];
}
int main()
{
	push(1);
	printf("%d", pop());
}