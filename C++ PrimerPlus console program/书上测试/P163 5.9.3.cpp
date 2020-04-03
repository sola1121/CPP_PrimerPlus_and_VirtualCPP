#include<iostream>
int main(){
	using namespace std;
	long double a, b = 0;
	for (cin>>a;a!=0;cin>>a)
	{
		b+=a;
		cout<<"The sum that your inputed: "<<b<<"\n"; 
	}
	
	cin.get();
	return 0;
}
