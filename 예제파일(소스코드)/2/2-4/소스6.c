#include <stdio.h>
int test(int x, int y)
{
    return x + y;
}
int main()
{
    int b = 3;
    scanf_s("", &b); //����ȭ ����
    int a = test(b, 2);
    scanf_s("", &a); //����ȭ ����
}
