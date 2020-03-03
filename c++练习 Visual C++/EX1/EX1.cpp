// EX1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Array{
public:
	Array(unsigned int s){
		size =s;
		num=0;
		a=new int[s];
	}
	virtual ~Array(){delete [] a;}

	virtual void add(int e){
		if (num<size){
			//*************//
			a[num]=e;
			num++;
		}
	}

	int get(unsigned int i) const{
		if (i<size)
			return a[i];
		return 0;
	}

protected:
	int * a;
	unsigned int size, num;
};


class SortedArray: public Array{
public:
	//***************//
	SortedArray(unsigned int s): size(s) {}

	virtual void add(int e){
		if (num>=size)
			return;
		int i=0, j;
		while(i<num){
			if(e<a[i]){
				for(j=num; j>i; j--){
					//*****************//
					
				}
				//******************//
				
				break;
			}
			i++;
		}
		if(i==num)
			a[i]=e;
		num++;
	}
};


void fun(Array & a){
	int i;
	for (i=10;i>=1;i--)
		a.add(i);

	for (i=0;i<10;i++)
		cout<<a.get(i)<<", ";
	
	cout<<endl;
}


int main(int argc, char* argv[])
{
	Array a(10);
	fun(a);
	SortedArray sa(10);
	fun(sa);

	system("pause");
	return 0;
}
