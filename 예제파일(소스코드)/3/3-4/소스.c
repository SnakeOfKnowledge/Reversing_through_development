#include <stdio.h>
#include <Windows.h>

int main()
{
    __try
    {
        int* nullpointer = NULL;
        *nullpointer = 8;
        printf("A");
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        printf("ERROR\n");
    }
    printf("B");
}
