// P39 2_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	int arr[5]={1,2,3,4,5};
	int *pvar=arr;
	for(int i=0;i<5;i++){
			cout<<"Array element["<<i<<"] = "<<*pvar<<endl;
			pvar = pvar+1;
		}

	cin.get();
	return 0;
}
