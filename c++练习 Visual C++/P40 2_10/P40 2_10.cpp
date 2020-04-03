// P40 2_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	int *parray[5];
	int iarray[5]={1,2,3,4,5};
	for (int i=0;i<5;i++){
			parray[i]=&iarray[i];
			cout<<"Array element ["<<i<<"] = "<<*parray[i]<<"\n"; 
		}

	cin.get();
	return 0;
}
