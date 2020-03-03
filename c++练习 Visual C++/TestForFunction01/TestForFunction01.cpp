// TestForFunction01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

void sort(int arr[20]);
void rank(int arr[20]);
int main(int argc, char* argv[])
{
	int array[20]={78,213,451,32,54,6,43,21,68,46,51,3,51,16,4,651,4,18,19,20};
	for(int i=0; i<20; i++){
		cout<<"array["<<i<<"]="<<array[i]<<"     ";
		if (i==9)
			cout<<endl;
	}
cout<<"\n\n\nRank:\n";
rank(array);

cout<<"\n\n\nSort:\n";
sort(array);

cout<<"\n\n";
cin.get();
return 0;
}

void sort(int arr[20]){
	int itemp=0;
	for (int j=0; j<20; j++){
		for (int k=0; k<20-j; k++){
			if (arr[k]>=arr[k+1]){
				itemp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=itemp;
			}
		}
	}
	for (int i=0; i<20; i++){
		cout<<arr[i]<<"  ";
	}
}

void rank(int arr[20]){
	int itemp=0;
	for (int j=0; j<20; j++){
		for (int k=1; k<20; k++){
			if (arr[j]<=arr[k]){
				itemp=arr[j];
				arr[j]=arr[k];
				arr[k]=itemp;
			}
		}
	}
	for (int i=0; i<20; i++){
		cout<<arr[i]<<"  ";
	}
}
