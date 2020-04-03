#include<iostream>
int main(){
	using namespace std;
	int a, b, c;
	cout<<"Please enter two integers: \n";
	cin>>a;
	cin>>b;
	if (a>b)
	{
		while (a>b)
		{
			b++;
			c+=b;
		}
		cout<<"\nresult: "<<c;
	}
	else
	{
		while (b>a)
		{
			a++; 
			c+=b;
		}
		cout<<"\nresult: "<<c;
	}
	
	cin.get();
	return 0;
}
