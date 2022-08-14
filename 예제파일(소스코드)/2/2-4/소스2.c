#include <stdio.h>

int sum(int a, int b);

int main()
{
    int 지역변수 = sum(1, 2);
}

int sum(int a, int b)
{
    int c = 3;
    return a + b + c;
}