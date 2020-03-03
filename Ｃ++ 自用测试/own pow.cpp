#include<iostream>
#include<cmath>
int main(){
	using namespace std;
	double x;
	double y;
	cout<<"输入底数: ___\b\b\b";
	cin>>x;
	cout<<"输入幂:___\b\b\b" ;
	cin>>y;
	
	cout<<"结果: "<<pow(x,y);
	
	cin.get();
	return 0; 
}
