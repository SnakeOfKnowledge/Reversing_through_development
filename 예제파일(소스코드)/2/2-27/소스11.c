#include <stdio.h>

char Hello_world[] = "Hello world";
int main()
{
    __asm
    {
        lea         eax, printf
        push        [Hello_world]
        call        eax
        pop         ebx
    }
}