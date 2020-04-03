#include<iostream>
int main(){
	using namespace std;
	double a;
	cout<<"Enter a value: ";
	cin>>a;
	int b = (int) a;
	if (a-b>0)
		cout<<"\nA decimal";
	else
		cout<<"\nNot a decimal";
	
	cin.get();
	return 0;
}
