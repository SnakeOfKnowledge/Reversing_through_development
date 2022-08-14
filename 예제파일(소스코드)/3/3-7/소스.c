#include <windows.h>

int main()
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	if (!CreateProcessA(NULL, "crackme1.exe", NULL, NULL, FALSE,
		CREATE_SUSPENDED, NULL, NULL, &si, &pi))
	{
		MessageBoxA(0, "crackme1.exe can not find", "ERROR", 0);
		return 1;
	}
	int jmp = 0xEB;
	char name[14] = "job_developer";
	BYTE je;
	char stringcheck[14];
	char originalstring[14] = "abex' 1st crac";
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pi.dwProcessId);
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
	ResumeThread(pi.hThread);
}