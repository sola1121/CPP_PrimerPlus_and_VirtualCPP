#include<iostream>
int main(){
	using namespace std;
	bool T=true;
	long x, z;
	cout<<"输入一个整数: _____ \b\b\b\b\b\b";
	cin>>x;
	z=x%2;
	
	{
	if (z==T){
		cout<<"这是奇数."<<endl;
}
	else{
		cout<<"这是偶数."<<endl;
}
	}
	
	cin.get();
	return 0;
}
