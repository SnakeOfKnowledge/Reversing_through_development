/*√‚√≥:https://docs.microsoft.com/ko-kr/cpp/assembler/inline/accessing-c-or-cpp-data-in-asm-blocks?view=msvc-170*/
// InlineAssembler_Accessing_C_asm_Blocks.cpp
// processor: x86
#include <stdio.h>
struct first_type
{
    char* weasel;
    int same_name;
};

struct second_type
{
    int wonton;
    long same_name;
};

int main()
{
    struct first_type hal;
    struct second_type oat;

    __asm
    {
        lea ebx, hal
        mov ecx, [ebx]hal.same_name; Must use 'hal'
        mov esi, [ebx].weasel; Can omit 'hal'
    }
    return 0;
}