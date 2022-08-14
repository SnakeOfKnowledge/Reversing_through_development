void __declspec(naked) main()
{
    int a;
    __asm {
        enter 4, 0
    }

    __asm mov a, 5

    __asm {
        leave
        ret
    }
}