#include <stdio.h>
#include <Windows.h>
#include <process.h>

unsigned __stdcall Thread_1(void* arg)
{
    while (1)
    {
        printf("2");
        //2�� ���� �� �ٸ� �����带 ���� �����Ѵ�.
        Sleep(1000);
    }
    //������ �����
    _endthreadex(0);
}

int main()
{
    //������ ������
    _beginthreadex(NULL, 0, Thread_1, 0, 0, NULL);
    while (1)
    {
        printf("1");
        //1�� ���� �� �ٸ� �����带 ���� �����Ѵ�.
        Sleep(2000);
    }
}