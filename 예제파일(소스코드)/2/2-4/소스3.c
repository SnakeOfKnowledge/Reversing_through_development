int __cdecl func(int test, int test2, int test3)
{
    return 1;
}
int __fastcall func2(int test, int test2, int test3)
{
    return 1;
}
int __stdcall func3(int test, int test2, int test3)
{
    return 1;
}
int __vectorcall func4(int test, int test2, int test3)
{
    return 1;
}

int main()
{
    func(1, 2, 3);
    func2(1, 2, 3);
    func3(1, 2, 3);
    func4(1, 2, 3);
}