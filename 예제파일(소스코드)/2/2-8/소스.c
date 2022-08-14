#include <stdio.h>

int main()
{
    int num;
    scanf_s("%d", &num);

    switch (num)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2\n");
        break;
    default:
        printf("default\n");
    };
}