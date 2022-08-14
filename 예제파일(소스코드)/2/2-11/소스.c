#include <stdio.h>

int main()
{
    int num;
    scanf_s("%d", &num);

    while (num)
    {

        printf("%d\n", --num);
    }
}