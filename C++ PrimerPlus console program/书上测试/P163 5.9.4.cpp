#include<iostream>
int main(){
	using namespace std;
	double a=100.0, b=100.0;
	int i=0;
	do
	{
		i++;
		a=a+100*0.1;
		b=b+b*0.05;
	}
	while (b<=a);
	cout<<i<<" years ago, Cleo's money becomes much than Daphne's."<<endl;
	cout<<"Daphne has: "<<a<<"\n"<<"Cleo has: "<<b;
	
	cin.get();
	return 0;
}
