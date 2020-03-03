// P33 2_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

enum Text{A,B,C,D};

void Opt(int state){
	switch (state){
		case A:{cout<<"Here is A\n";break;}
		case B:{cout<<"Here is B\n";break;}
		case C:{cout<<"Here is C\n";break;}
		case D:{cout<<"Here is D\n";break;}
		default: cout<<"You import a error number.\n";break;}
}

int main(int argc, char* argv[])
{
	int state;
	cout<<"import an integer number from 0 to 3:  ";
	cin>>state;
	Opt(state);
	cin.get();
	return 0;
}
