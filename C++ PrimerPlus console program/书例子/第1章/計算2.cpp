#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double X;
	double Y;
	double Z;
	
	cout<<"This is a simple calculation program.\n";
	cout<<" "<<endl;
	cout<<"Input X value: ";  cin>>X;
	cout<<"Input Y value: ";  cin>>Y;
	Z=X*X+2*sqrt(Y);
	cout<<" \n";
	cout<<"Calculate result: "<<Z<<endl;
	cout<<"Over...\n";
	cout<<" \n";
	system ("pause");
	return 0;
}
