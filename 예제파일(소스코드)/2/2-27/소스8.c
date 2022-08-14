#include <stdio.h>

int main()
{
    int arr[10];
    char string[] = "%d %d %d %d\n";

    //array[6] = 77;
    __asm mov arr[6 * TYPE int], 77
    //printf(string, array[6]);
    __asm {
        mov         ecx, 4
        imul        edx, ecx, 6
        mov         eax, dword ptr arr[edx]
        push        LENGTH arr
        push        SIZE arr
        push        TYPE arr
        push        eax
        lea         ecx, [string]
        push        ecx
        call        printf
        add         esp, 20
    }
}