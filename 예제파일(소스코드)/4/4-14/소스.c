void CMFCApplication1Dlg::OnClickedMfcbutton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFile file;
	file.Open(_T("Test.txt"), CFile::modeCreate | CFile::modeWrite, NULL);
	file.Write("Test", 5);
}