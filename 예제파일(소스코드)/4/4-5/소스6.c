int main()
{
    int x[10];

    int i = 1;
    for (int& y : x)
    {
        y = i++;
    }
}