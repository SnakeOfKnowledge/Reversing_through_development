int factorial(int num);

int main()
{
    factorial(5);
}

int factorial(int num)
{
    if (num == 1)
        return 1;

    return (num * factorial(num - 1));
}