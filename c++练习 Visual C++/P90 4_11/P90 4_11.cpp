// P90 4_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

void valuepass(int * var){
	if (var != NULL){
		*var = 10;
		cout<<*var<<endl;
	}
}

int main(int argc, char* argv[])
{
	int ivar = 5;
	valuepass(&ivar);
	cout<<"\n\n"<<ivar;

	cin.get();
	return 0;
}
