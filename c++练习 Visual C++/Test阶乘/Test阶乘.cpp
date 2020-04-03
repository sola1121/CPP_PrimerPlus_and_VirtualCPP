// Test阶乘.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	int a;
	int b=1;
	cout<<"输入你要计算的阶乘数(整数): ";
	cin>>a;
	if (a==0)
		cout<<"0!=1";
	else
	for (int i=1; i<=a; i++){
		b*=i;
	}
	cout<<a<<"!="<<b<<endl;

	cin.get();
	return 0;
}
