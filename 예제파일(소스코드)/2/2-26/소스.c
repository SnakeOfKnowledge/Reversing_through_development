#include <stdio.h>
#include <stdlib.h>

typedef struct positon
{
    int x, y;
} POS;

int main()
{
    POS* ��ǥ = malloc(sizeof(POS));
    (*��ǥ).x = 20, ��ǥ->y = 10;
}