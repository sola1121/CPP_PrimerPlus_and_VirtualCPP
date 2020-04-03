// P30_2_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>
int main(int argc, char* argv[])
{
	float eps=0.0000001;
	float fvar=0.00001;
	if(fvar >= eps && fvar<= eps)
		cout<<"float数据类型为零"<<eps;
		else
	cout<<"两个相等咯"<<eps<<"\n";
		return 0;
}