#include <windows.h>

int main()
{
    HANDLE crackme1_handle = FindWindowA("#32770", "abex' 1st crackme");
    SetWindowTextA(crackme1_handle, "job_developer");
}