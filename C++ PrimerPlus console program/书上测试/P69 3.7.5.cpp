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
	x = double (ex)/wp;   //ǿ��ת��һ��ll����,������Զ���Ϊ�������� 
	cout<<"The population of the US is "<<x<<F<<" of the world population."<<endl;
	
	cin.get();
	return 0;
}
