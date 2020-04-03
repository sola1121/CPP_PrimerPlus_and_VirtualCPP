#include<iostream>
int main(){
	using namespace std;
	bool check;
	cout<<"Enter 1(true) or 0(false)\n";
	cin>>check;
	if (check==true)
		cout<<"This is the result of true.\n";
	else 
		goto Next;
	Next : cout<<"This is the result of false.\n";
	
	cout<<"Done~";
	
	return 0;
}
