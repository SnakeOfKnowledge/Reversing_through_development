void __declspec(naked) main()
{
    int a;
    __asm {
        push ebp
        mov ebp, esp
        sub esp, __LOCAL_SIZE
    }

    __asm mov a, 5

    __asm {
        add esp, __LOCAL_SIZE
        pop ebp
        ret
    }
}