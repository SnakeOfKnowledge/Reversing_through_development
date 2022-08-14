#include <stdio.h>

char string[] = "%d\n";
int main()
{
    __asm
    {
        jmp     $ + 20
        push    1
        push    offset string
        call    printf
        add     esp, 8

        push    2
        push    offset string
        call    printf
        add     esp, 8
    }
}