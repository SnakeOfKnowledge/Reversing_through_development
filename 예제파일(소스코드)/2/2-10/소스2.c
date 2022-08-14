#include <stdio.h>

int main()
{
    int a;
    scanf_s("%d", &a);

    printf("%d\n", a++);
    printf("%d\n", ++a);
    printf("%d\n", a--);
    printf("%d\n", --a);
}