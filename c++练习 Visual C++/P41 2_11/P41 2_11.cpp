// P41 2_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	int ivar=10;
	int &rvar=ivar;
	cout<<"ivar = "<<ivar
		<<"\nrvar = "<<rvar;

	cout<<endl
		<<"ivar's address : "<<&ivar
		<<"\nrvar's address : "<<&rvar;

	cin.get();
	return 0;
}
