// P28_21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void TestStaticVar()
{
	int slocal = 10;		//����һ���ֲ���̬����
	printf("%d\n",slocal);		//�������
	slocal++;				//�Լ�1
}
void main(int)
{
	//����3�ε���TestStaticVar
	TestStaticVar();
	TestStaticVar();
	TestStaticVar();
}