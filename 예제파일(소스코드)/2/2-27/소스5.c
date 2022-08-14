#include <stdio.h>

int main()
{
    int array[10];
    char string[] = "%d\n";

    //array[6] = 77;
    __asm mov array[6 * TYPE int], 77
    //printf(string, array[6]);
    __asm {
        mov         ecx, 4
        imul        edx, ecx, 6
        mov         eax, dword ptr array[edx]
        push        eax
        lea         ecx, [string]
        push        ecx
        call        printf
        add         esp, 8
    }
}