#include <stdio.h>
#include <stdlib.h>

int �������� = 2;
extern int �ܺκ���;
extern int test2();
int test();

int main()
{
    auto int �������� = 1;
    auto int* ��������;
    register int �������ͺ���;
    �������� = malloc(sizeof(int));
    *�������� = 4;
    printf("%d\n", ��������);
    printf("%d\n", ��������);
    printf("%d\n", test());
    printf("%d\n", *��������);
    printf("%d\n", �������ͺ��� = 5);
    printf("%d\n", �ܺκ���);
    printf("%d\n", test2());
}
int test()
{
    static int �������� = 2;
    �������� = �������� + 1;
    return ��������;
}