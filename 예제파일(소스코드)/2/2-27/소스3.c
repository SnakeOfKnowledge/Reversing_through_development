/*√‚√≥: https://docs.microsoft.com/ko-kr/cpp/assembler/inline/inline-assembler-overview?view=msvc-170*/
// asm_overview.cpp
// processor: x86
void __declspec(naked) main()
{
    // Naked functions must provide their own prolog...
    __asm {
        push ebp
        mov ebp, esp
        sub esp, __LOCAL_SIZE
    }

    // ... and epilog
    __asm {
        pop ebp
        ret
    }
}