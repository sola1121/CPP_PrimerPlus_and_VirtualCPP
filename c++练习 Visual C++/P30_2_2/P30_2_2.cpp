// P30_2_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>
int main(int argc, char* argv[])
{
	float eps=0.0000001;
	float fvar=0.00001;
	if(fvar >= eps && fvar<= eps)
		cout<<"float��������Ϊ��"<<eps;
		else
	cout<<"������ȿ�"<<eps<<"\n";
		return 0;
}