#include <stdarg.h>

int add(int args, ...)
{
    int sum = 0;
    va_list ap;

    va_start(ap, args);
    for (int i = 0; i < args; i++)
    {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    return sum;
}

int main()
{
    add(2, 100, 200);
}