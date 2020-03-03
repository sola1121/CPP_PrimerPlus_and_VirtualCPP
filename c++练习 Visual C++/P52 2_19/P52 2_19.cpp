// P52 2_19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

void OutputString(char cdata[]){
	int size=sizeof(cdata);
	cout<<size<<"\n";
}

int main(int argc, char* argv[])
{
	OutputString("One world, One Dream!");
	return 0;
}
