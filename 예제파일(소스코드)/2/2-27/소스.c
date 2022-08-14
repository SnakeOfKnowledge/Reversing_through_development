#include <stdio.h>

const char Hello_world[] = "Hello world";
int main()
{
    __asm //printf("Hello world");
    {
        lea         eax, Hello_world
        push        eax
        call        printf
        add         esp, 4
    }
}