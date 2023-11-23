#include<iostream>
using namespace std;
float f(float x,int y)//x乃輸入數，y乃取到第幾位小數
{
	int a,c;
	c=x;
	a=x;
	x=x-a;
	for(int i=0;i<y;i++)
		x=x*10;
	a=x;
	x=a;
	for(int i=0;i<y;i++)
	x=x/10;
	x=x+c;
	return x;	 
}
