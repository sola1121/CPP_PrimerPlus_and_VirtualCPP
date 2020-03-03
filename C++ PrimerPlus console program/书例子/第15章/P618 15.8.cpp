#include <iostream>
#include <cfloat>

bool hmean(double a, double b, double * ans);

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	
	double x, y, z;
	
	cout<<"Enter two numbers: ";
	while (cin>>x>>y){
		if (hmean(x, y, &z))
			cout<<"Harmonic mean of "<<x<<" and "<<y<<" is "<<z<<endl;
		else
			cout<<"One value should not be the negative of the other - try again.\n";
		cout<<"Enter next set of numbers <any characters to quit>: ";
	}
	cout<<"Bye~\n";

	system("pause");
	return 0;
}

bool mean(double a, double b, double * ans){
	if (a==-b){
		*ans=DBL_MAX;
		return false;
	}
	else{
		*ans=2.0*a*b/(a+b);
		return true;
	}
	
}
