// P40 point and const test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>


int main(int argc, char* argv[])
{
	int num=10,num2=20;
	const int *pnum=&num;
	cout<<*pnum<<endl;
	pnum=&num2;
	cout<<*pnum<<endl;
	
	cout<<"\n\nSecond test"<<endl;
	int num3=30,num4=40;
	int const *p_num=&num3;
	cout<<*p_num<<endl;
	p_num=&num4;
	cout<<*p_num<<endl;

	cin.get();
	return 0;
}
