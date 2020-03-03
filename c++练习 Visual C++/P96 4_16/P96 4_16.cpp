// P96 4_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

typedef unsigned int UINT;

/*�����ѭ������n�Ľ׳�*/
long factorial01(const UINT n){
	long ret = 1;
	for (int i=1; i<=n; i++){
		ret*=i;
	}
	return ret;
}

/*ʹ�õݹ���õķ�ʽ����n�Ľ׳�*/
long factorial02(const UINT n){
	if (n==0||n==1){
		return 1;
	}
	else {
		return n * factorial02(n-1);
	}
}

int main(int argc, char* argv[])
{
	//������������ַ���

	UINT a,b,c;
	cin>>a;
	b=factorial01(a);
	c=factorial02(a);
	cout<<"\n"<<"b = "<<b
		<<"\n\n"<<"c = "<<c
		<<endl;

	cin.get();
	return 0;
}
