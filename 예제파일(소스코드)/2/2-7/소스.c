#include <stdio.h>

int main()
{
    int num = 0, num2 = 0;
    scanf_s("%d", &num);
    scanf_s("%d", &num2);
    if (num == 1 && num2 == 2)
        printf("num = 1 and num2 = 2\n");
    if (num == 3 || num2 == 4)
        printf("num = 3 or num2 = 4\n");
    if (!num)
        printf("%d\n", num);
}