// Test�׳�.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	int a;
	int b=1;
	cout<<"������Ҫ����Ľ׳���(����): ";
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
