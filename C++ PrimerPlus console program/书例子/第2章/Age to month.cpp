#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	int age,days=1;
	cout<< "Enter your age: ";
	cin>>age;
	cout<<endl;
	age=age*12;
	days=age*30;
	cout<<"There are "<<age<<" monthes."<<endl;
	cout<<"And there are "<<days<<" days."<<endl;
	system("pause");
	return 0;
}
