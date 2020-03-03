// Test½×³Ë¼Ó.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

int main(int argc, char* argv[])
{
	unsigned int a,b=1,c=0,i=1;
	cin>>a;

	for (int x=1; x<=a; x++){
		c+=(b*=i);
		i++;
	}
	cout<<"\nprint: "<<c<<endl;
	

	cin.get();
	return 0;
}


/*

1 + 1*2+ 1*2*3 + 1*2*3*4 +1*2*3*4*5

1
3
9
33
153

*/