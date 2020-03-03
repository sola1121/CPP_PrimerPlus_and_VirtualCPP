// P48 point.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	int arry[5]={1,2,3,4,5};
	int *point=arry;
	for (int i=0;i<5;i++){
			cout<<"Array elment["<<i<<"] = "<<*point<<"\n";
			point++;
		}

	cin.get();
	return 0;
}
