#include<iostream>
#include<cmath>
using namespace std;
double year(double Y){
	double L;
	L=Y*63240*150000000;
	return L;
}
int main(){
	double Y; 
	cout<<"Enter the number of light years: ";cin>>Y;cout<<endl;
	double X;
	X=year(Y);
	cout<<Y<<" ligeht years = "<<X<<" KM."<<endl;
	cout<<" "<<endl;
	system("pause");
	return 0;
}
