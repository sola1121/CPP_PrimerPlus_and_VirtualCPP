#include <iostream>
double cube(double a);
double refcube(double &ra);

int main(){
	using namespace std;
	
	double x=3.0;
	
	cout<<cube(x+4);
	cout<<" = cube of "<<x<<endl;
	cout<<refcube(x);
	cout<<" = refcube of "<<x<<endl;
	
	system("pause");
	return 0;
}

double cube(double a){
	a*=a*a;
	return a;
}

double refcube(double &ra){
	ra*=ra*ra;
	return ra;
}
