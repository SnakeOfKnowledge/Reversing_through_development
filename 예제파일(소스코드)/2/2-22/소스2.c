int add(int args, ...)
{
    int sum = 0;
    int* ap = &args + 1;

    for (int i = 0; i < args; i++)
    {
        sum += *ap++;
    }

    ap = 0;
    return sum;
}

int main()
{
    add(3, 100, 200, 300);
}