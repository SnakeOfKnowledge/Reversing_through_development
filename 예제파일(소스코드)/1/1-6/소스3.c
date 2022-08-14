#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}

int main()
{
    int result;
    result = add(4, 3);
    result = sub(4, 3);
}