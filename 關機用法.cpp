#include <windows.h>
using namespace std;
int main() {
	system("shutdown -s -t 60");//�����A�Ʀr�O�����ɶ��˼� ���� 
	MessageBox(0,"��OK�Ѱ�����","���D�g",MB_OK);
	system("shutdown -a");//�Ѱ����� 
} 
