#include <iostream>
#include <cmath>
using namespace std;
double jisuan(double a,double b){
	double r = a*b;
	return r;
}
int main(){
	double c,d;
	cout<<"Enter your number: ";
	cin>>c;
	cout<<endl;
	cin>>d;
	cout<<endl;
	double r=jisuan(c,d);
	cout<<r;
	return 0;
}
