void CMFCApplication1Dlg::OnClickedMfcbutton1()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CFile file;
	file.Open(_T("Test.txt"), CFile::modeCreate | CFile::modeWrite, NULL);
	file.Write("Test", 5);
}