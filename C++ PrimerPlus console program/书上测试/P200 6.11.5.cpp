#include<iostream>
int main(){
	using namespace std;
	double x;
	cout<<"Enter your tavrp: ";
	while (cin>>x){
		if (x<0)
			break;
		else {
			if (x<=5000){
				cout<<"You needn't pay taxes.";
				cout<<"\nEnter nest one: ";
			}
			else if (x>5000&&x<15000){
				double a;
				a=(x-5000)*0.1;
				cout<<"You have to pay taxes "<<a<<" tvarps.";
				cout<<"\nEnter nest one: ";
			}
			else if (x>15000&&x<35000){
				double b;
				b=10000*0.1+(x-15000)*0.15;
				cout<<"You have to pay taxes "<<b<<" tvarps.";
				cout<<"\nEnter nest one: ";
			}
			else {
				double c;
				c=10000*0.1+20000*0.15+(x-35000)*0.2;
				cout<<"You have to pay taxes "<<c<<" tvarps.";
				cout<<"\nEnter nest one: ";
			}
		}
	}
	
	cin.get();
	return 0;
}
