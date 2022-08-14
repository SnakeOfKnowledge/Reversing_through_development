#include <stdio.h>

int main()
{
    int a = 7;
    int* b = &a;
    int** c = &b;
    int*** d = &c;
    printf("%d %d %d %d\n", a, *b, **c, ***d);
}