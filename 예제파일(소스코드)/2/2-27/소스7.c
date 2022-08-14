#include <stdio.h>

char string[] = "%d\n";
int main()
{
    __asm
    {
        jmp     A
        push    1
        push    offset string
        call    printf
        add     esp, 8
        A:
        push    2
            push    offset string
            call    printf
            add     esp, 8
    }
}