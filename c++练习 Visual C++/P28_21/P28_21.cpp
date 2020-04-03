// P28_21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void TestStaticVar()
{
	int slocal = 10;		//定义一个局部静态变量
	printf("%d\n",slocal);		//输出变量
	slocal++;				//自加1
}
void main(int)
{
	//连续3次调用TestStaticVar
	TestStaticVar();
	TestStaticVar();
	TestStaticVar();
}