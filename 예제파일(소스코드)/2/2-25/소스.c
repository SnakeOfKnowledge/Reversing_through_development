typedef struct positon
{
    int x, y;
} POS;
typedef union positon2
{
    int x, y;
} POS2;
typedef union test
{
    int x;
    double y;
} test;
int main()
{
    POS a;
    POS2 b;
    test c;
    a.x = 10, a.y = 20;
    b.x = 20, b.y = 10;
    c.x = 20, c.y = 1.0;
}