#include <Windows.h>
#include "resource.h"

BOOL CALLBACK DialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_INITDIALOG:
		CreateWindowA("Button", "��ư", WS_CHILD | WS_VISIBLE | WS_BORDER,
			10, 10, 100, 25, hwndDlg, (HMENU)0, hwndDlg, NULL);
	case WM_COMMAND:
		switch (wParam)
		{
		case 0:
			MessageBoxA(NULL, "Button Click", "��ư", NULL);
			break;
		case IDOK:
			MessageBoxA(NULL, "OK Click", "OK", NULL);
			break;
		case IDCANCEL:
			EndDialog(hwndDlg, 0);
			break;
		}
	}
	return FALSE;
}

int main()
{
	DialogBoxA(NULL, MAKEINTRESOURCEA(IDD_DIALOG1), NULL, DialogProc);
}