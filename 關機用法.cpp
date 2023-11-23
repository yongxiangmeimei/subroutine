#include <windows.h>
using namespace std;
int main() {
	system("shutdown -s -t 60");//關機，數字是關機時間倒數 單位秒 
	MessageBox(0,"按OK解除關機","標題君",MB_OK);
	system("shutdown -a");//解除關機 
} 
