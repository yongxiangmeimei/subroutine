#include<iostream>
using namespace std;
float f(float x,int y)//x�D��J�ơAy�D����ĴX��p��
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
