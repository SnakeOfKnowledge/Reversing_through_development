#include <windows.h>

int main()
{
    HANDLE crackme1_handle = FindWindowA("#32770", "abex' 1st crackme");
    LPDWORD dwProcessId;
    GetWindowThreadProcessId(crackme1_handle, &dwProcessId);
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessId);
    int jmp = 0xEB;
    BYTE je;
    char name[14] = "job_developer";
    char stringcheck[14];
    char originalstring[14] = "abex' 1st crac";
    ReadProcessMemory(hProcess, (LPVOID)0x00401026, &je, 1, 0);
    ReadProcessMemory(hProcess, (LPVOID)0x00402000, &stringcheck, 14, 0);
    if (je != 0x74 | strcmp(stringcheck, originalstring) == 0)
    {
        MessageBoxA(0, "메모리가 일치하지않습니다.", "ERROR2", 0);
        return 1;
    }
    WriteProcessMemory(hProcess, (LPVOID)0x00401026, &jmp, 1, 0);
    WriteProcessMemory(hProcess, (LPVOID)0x00402000, name, 14, 0);

    CloseHandle(hProcess);
}