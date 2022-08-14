#include <windows.h>
#include <stdio.h>
#include <psapi.h>

int main()
{
    HANDLE crackme1_handle = FindWindowA("#32770", "abex' 1st crackme");
    SetWindowTextA(crackme1_handle, "job_developer");
    LPDWORD dwProcessId;
    GetWindowThreadProcessId(crackme1_handle, &dwProcessId);
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessId);

    HMODULE hMods[1024];
    DWORD cbNeeded;

    // Get a list of all the modules in this process.

    if (EnumProcessModules(hProcess, hMods, sizeof(hMods), &cbNeeded))
    {
        for (int i = 0; i < (cbNeeded / sizeof(HMODULE)); i++)
        {
            TCHAR szModName[MAX_PATH];

            // Get the full path to the module's file.

            if (GetModuleFileNameEx(hProcess, hMods[i], szModName,
                sizeof(szModName) / sizeof(TCHAR)))
            {
                // Print the module name and handle value.

                printf("\t%s (0x%08X)\n", szModName, hMods[i]);
            }
        }
    }

    int jmp = 0xEB;
    WriteProcessMemory(hProcess, (LPVOID)0x00401026, &jmp, 1, 0);
    CloseHandle(hProcess);
}
