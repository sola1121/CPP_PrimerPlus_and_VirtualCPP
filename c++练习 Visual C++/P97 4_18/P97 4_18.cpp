// P97 4_18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

typedef int (*ptfun)(int,int);

int invoke(int x, int y, ptfun fun){
	return fun (x,y);
}

int sum(int x, int y){
	return x+y;
}

int sub(int x,int y){
	return x-y;
}

int mul(int x,int y){
	return x*y;
}

int divi(int x,int y){
	return x/y;
}

int main(int argc, char* argv[])
{
	ptfun pfun;
	pfun = sum;
	int ret=invoke(20,10,pfun);
	cout<<ret<<endl;
	pfun = mul;
	ret=invoke(20,10,pfun);
	cout<<ret;

	cin.get();
	return 0;
}
