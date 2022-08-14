#include <stdio.h>

char Hello_world[] = "Hello world";
int main()
{
    __asm
    {
        push        offset Hello_world
        call        printf
        add         esp, 4
    }
}