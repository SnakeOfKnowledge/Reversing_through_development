#include <stdio.h>
int test(int x, int y)
{
    return x + y;
}
int main()
{
    int b = 3;
    scanf_s("", &b); //최적화 방지
    int a = test(b, 2);
    scanf_s("", &a); //최적화 방지
}
