// P108 4_26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

template<class type, int len>
type max_(type array[len]){
	type ret=array[0];
	for (int i=1; i<len; i++){
		ret=(ret>array[i]?;ret:array[i]);
	}
	return ret;
}

int main(int argc, char* argv[])
{
	int array[5]={1,2,3,4,5};
	int iret=max_<int,5>(array);
	double dset[3]={10.5,11.2,9.8};
	double dret=max_<double, 3>(dset);

	return 0;
}
