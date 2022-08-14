#include <stdio.h>
#include <stdlib.h>

typedef struct positon
{
    int x, y;
} POS;

int main()
{
    POS* ÁÂÇ¥ = malloc(sizeof(POS));
    (*ÁÂÇ¥).x = 20, ÁÂÇ¥->y = 10;
}