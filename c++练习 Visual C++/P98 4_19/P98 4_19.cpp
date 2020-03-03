// P98 4_19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int sum(int x,int y){
	return x+y;
}

int sub(int x,int y){
	return x-y;
}

int mul(int x, int y){
	return x*y;
}

int divi(int x,int y){
	return x/y;
}

int main(int argc, char* argv[])
{
	int(*ptfun[4])(int,int);
	ptfun[0]=sum;
	ptfun[1]=sub;
	ptfun[2]=mul;
	ptfun[3]=divi;
	for (int i=0; i<4; i++){
		int ret=ptfun[i](30,10);
		cout<<"ptfun["<<i<<"] in "<<ptfun[i](30,10)<<" = "<<ret<<"\n";
	}

	cin.get();
	return 0;
}
