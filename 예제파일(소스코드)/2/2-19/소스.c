#include <stdio.h>

int main()
{
    int 점수[5];

    점수[0] = 90;
    점수[1] = 80;
    점수[2] = 70;
    점수[3] = 60;
    점수[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d 번째 사람의 점수는 %d이다", i + 1, 점수[i]);
    }
}