// P39 2_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>


int main(int argc, char* argv[])
{
	int ivar=10;
	int *pvar=&ivar;
	*pvar=8;
	cout<<"ivar= "<<ivar<<endl;
	cout<<"pvar= "<<*pvar<<endl;
	
	cin.get();
	return 0;
}
