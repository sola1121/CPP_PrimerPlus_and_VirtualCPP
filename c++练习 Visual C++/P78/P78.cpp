// P78.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>
#include<string.h>

bool validatedata(const int price){
	if (price>10000 || price<10){
		cout<<"Error of price.\n";
		return false;
	}
cout<<"compelete\n";
return true;
}

void outputinfo(const char * pchData){
	if (strlen(pchData)>50){
		cout<<"Too long of input.\n";
		return;
	}
	else{
		cout<<"pchData: "<<pchData<<"\n";
	}
}

void ReturnDemo(int min){
	int * pArray = new int[5];
	for (int i=0; i<5; i++){
		pArray[i]=i;
	}
	if (pArray[0]>min){
		delete [] pArray;
		cout<<"pArray[0]>min  pArray[0]="<<pArray[0]<<"\n";
		return;
	}
	else{
		pArray[0]=min;
		cout<<"pArray[0]<=min   pArray[0]="<<pArray[0]<<"\n";
	}
	delete [] pArray;
}

int main(int argc, char* argv[])
{
	char * x="12346579qwerutoy";
	int y=-9;
	int z=34689;
	bool judgement;
	outputinfo(x);
	cout<<"\n";
	ReturnDemo(y);
	cout<<"\n";
	judgement = validatedata(z);
	cout<<judgement<<"\n";

	cin.get();
	return 0;
}
