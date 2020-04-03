// DebugTestStudy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

int max(int a, int b){
	return a>b?a:b;
}

int main(int argc, char* argv[])
{
	int m,n;
	cin>>m>>n;
	cout<<"\n";
	cout<<max(m,n)<<endl;

	cin.get();
	return 0;
}
