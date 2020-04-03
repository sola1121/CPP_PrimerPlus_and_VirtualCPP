// P65.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	int iar =0;
	{
		int iar =1;
		cout<<"This is iar1: "<<iar<<"\n";
	}
	cout<<"This is iar0: "<<iar;

	cin.get();
	return 0;
}
