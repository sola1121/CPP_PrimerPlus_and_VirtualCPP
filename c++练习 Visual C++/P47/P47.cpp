// P47.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	int arr=10;
	int arry=arr++;
	cout<<arr<<"\n"<<arry<<endl;

	int iarr=10;
	int iarry=++iarr;
	cout<<"\n"<<iarr<<"\n"<<iarry;

	cin.get();
	return 0;
}
