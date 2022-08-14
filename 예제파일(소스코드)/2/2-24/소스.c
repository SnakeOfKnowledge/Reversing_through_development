#include <stdio.h>
#include <Windows.h>
#include <process.h>

unsigned __stdcall Thread_1(void* arg)
{
    while (1)
    {
        printf("2");
        //2초 정지 및 다른 스레드를 위해 포기한다.
        Sleep(1000);
    }
    //스레드 종료용
    _endthreadex(0);
}

int main()
{
    //스레드 생성용
    _beginthreadex(NULL, 0, Thread_1, 0, 0, NULL);
    while (1)
    {
        printf("1");
        //1초 정지 및 다른 스레드를 위해 포기한다.
        Sleep(2000);
    }
}