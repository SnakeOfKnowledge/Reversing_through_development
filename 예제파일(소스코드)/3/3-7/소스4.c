#include <windows.h>
#include <tlhelp32.h>

int main()
{
    PROCESSENTRY32 P_entry;
    P_entry.dwSize = sizeof(PROCESSENTRY32);

    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

    if (Process32First(snapshot, &P_entry) == TRUE)
    {
        while (Process32Next(snapshot, &P_entry) == TRUE)
        {
            if (strcmp(P_entry.szExeFile, "crackme1.exe") == 0)
            {
                HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE,
                    P_entry.th32ProcessID);
                int jmp = 0xEB;
                WriteProcessMemory(hProcess, (LPVOID)0x00401026, &jmp, 1, 0);
                CloseHandle(hProcess);
            }
        }
    }
    CloseHandle(snapshot);
}