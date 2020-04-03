// P56.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>
#include <windows.h>


int main(int argc, char* argv[])
{
	int x,y,z;
	cout<<"Input x: ";
	cin>>x;
	cout<<"\nInput y: ";
	cin>>y;
	if (x>y)
		MessageBox(NULL,"The X is bigger than y.","!",MB_OKCANCEL);
	else if (x==y)
		MessageBox(NULL,"The X is equal to Y.","!",MB_OKCANCEL);
	else
		z = MessageBox(NULL,"The Y is bigger than x.","!",MB_OKCANCEL);  //messagebox是一个int ok返回1 cancel返回2

	cout<<"\n"<<z;

	cout<<endl;
	cin.get();

	return 0;
}
