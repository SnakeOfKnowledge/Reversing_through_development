#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	[=](int a) mutable { printf("%d\n", m = n + a); }(1);
	printf("%d\n", m);
	printf("%d\n", n);
	[&](int a) mutable { printf("%d\n", m = n + a); }(1);
	printf("%d\n", m);
	printf("%d\n", n);
}