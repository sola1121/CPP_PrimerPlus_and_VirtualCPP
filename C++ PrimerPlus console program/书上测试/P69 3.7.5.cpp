#include<iostream>
#include<cmath>
int main(){
	using namespace std;
	long long wp, ex, y;
	char F='%';
	double x;
	cout<<"Enter the world's population: ";
	cin>>wp;
	cout<<"Enter the population of US: ";
	cin>>ex;
	x = double (ex)/wp;   //强制转换一个ll类型,计算机自动改为浮点运算 
	cout<<"The population of the US is "<<x<<F<<" of the world population."<<endl;
	
	cin.get();
	return 0;
}
