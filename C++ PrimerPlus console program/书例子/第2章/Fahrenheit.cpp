#include<iostream>
#include<cmath> 
using namespace std;
double Fahrenheit(double Celsius){
	double F=1.8*Celsius+32.0;
	return F;
}
int main(){
	double Celsius;
	cout<<"Please enter a Celsius value: ";cin>>Celsius;cout<<endl;
	double F=Fahrenheit(Celsius);
	cout<<Celsius<<" degrees Celsius is "<<F<<" degrees Fahtenheit."<<endl;
	cout<<" "<<endl;
	system("pause");
	return 0;
}

