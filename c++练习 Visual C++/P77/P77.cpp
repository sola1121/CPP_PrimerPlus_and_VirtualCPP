// P77.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	int i=0,a=0;

	do
	{
		a+=i;
		++i;
		if (i==4)
			goto jump;
	}
	while (i<=5);
	
	jump: cout<<a<<"\n";

	cin.get();
	return 0;
}
