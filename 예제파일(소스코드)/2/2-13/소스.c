#include <stdio.h>

int main()
{
    int num;
    scanf_s("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", i);
    }
}