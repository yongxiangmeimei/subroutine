#include <windows.h>
#include<iostream>
using namespace std;
int main()
{
	int a;
	a=MessageBox(0,"���e","���D",MB_NOFOCUS );//�O=6�A�_=7�A����=2 
	cout<<a;
}/* 
MB_OK  OK
MB_OKCANCEL   �T�w ���� 
MB_ABORTRETRYIGNORE  �פ� ���� ���L
MB_YESNOCANCEL  �O �_ ���� 
MB_YESNO  �O �_ 
MB_RETRYCANCEL  ���� ����
MB_CANCELTRYCONTINUE  ���� ���� �~�� 
MB_ICONHAND  (X)�T�w�P MB_ICONERROR�BMB_ICONSTOP 
MB_ICONQUESTION(�H)�T�w
MB_ICONEXCLAMATION   (�T���ΡI)�T�w�P MB_ICONWARNING 
MB_ICONASTERISK  (��I)�T�w �PMB_ICONINFORMATION 
MB_USERICON  �T�w �m�� 
MB_DEFBUTTON1  MB_DEFBUTTON2 MB_DEFBUTTON3 MB_DEFBUTTON4 MB_APPLMODAL MB_TASKMODAL MB_NOFOCUS MB_SETFOREGROUND MB_DEFAULT_DESKTOP_ONLY�T�w �a���U
MB_SYSTEMMODAL  system�T�w
MB_HELP  �T�w ���� 
MB_NOFOCUS �T�w 
MB_RIGHT �T�w�a�k 
*/ 
