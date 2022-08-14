#include <Windows.h>
#include "resource.h"

BOOL CALLBACK DialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch (wParam)
		{
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