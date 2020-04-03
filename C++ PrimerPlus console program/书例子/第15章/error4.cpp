#include <iostream>
#include <cmath>
#include "exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main(){
	using std::endl;
	using std::cout;
	using std::cin;
	
	double x, y, z;
	
	cout<<"Enter two number: ";
	while(cin>>x>>y){
		try{
			z=hmean(x, y);
			cout<<"Harmonic hmean of "<<x<<" and "<<y<<" is "<<z<<endl;
			cout<<"Harmonic gmean of "<<x<<" and "<<y<<" is "<<gmean(x, y)<<endl;
			cout<<"Enter next set of numbers <any characters to quit>: ";
		}
		catch (bad_hmean & bg){
			bg.mesg();
			cout<<"Try again\n";
			continue;
		}
		catch (bad_gmean & hg){
			cout<<hg.mesg();
			cout<<"Values uesd: "<<hg.v1<<", "<<hg.v2<<endl;
			cout<<"Sorry, you don't get to play any more.\n";
			break;
		}
	}
	
	cout<<"Bye~\n";
	
	system("pause");
	return 0;
}

double hmean(double a, double b){
	if (a==-b)
		throw bad_hmean(a, b);   //使用构造函数 
	return 2.0*a*b/(a+b);
}

double gmean(double a, double b){
	if (a<0 || b<0)
		throw bad_gmean(a, b);   //使用构造函数 
	return std::sqrt(a*b);
}
