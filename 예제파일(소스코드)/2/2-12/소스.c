#include <stdio.h>

int main()
{
    int num;
    scanf_s("%d", &num);

    do
    {
        printf("%d\n", --num);
    } while (num);
}