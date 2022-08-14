#include <stdio.h>
#include <stdlib.h>

int 전역변수 = 2;
extern int 외부변수;
extern int test2();
int test();

int main()
{
    auto int 지역변수 = 1;
    auto int* 동적변수;
    register int 레지스터변수;
    동적변수 = malloc(sizeof(int));
    *동적변수 = 4;
    printf("%d\n", 지역변수);
    printf("%d\n", 전역변수);
    printf("%d\n", test());
    printf("%d\n", *동적변수);
    printf("%d\n", 레지스터변수 = 5);
    printf("%d\n", 외부변수);
    printf("%d\n", test2());
}
int test()
{
    static int 정적변수 = 2;
    정적변수 = 정적변수 + 1;
    return 정적변수;
}