#include<iostream>
int main(){
	using namespace std;
	bool T=true;
	long x, z;
	cout<<"����һ������: _____ \b\b\b\b\b\b";
	cin>>x;
	z=x%2;
	
	{
	if (z==T){
		cout<<"��������."<<endl;
}
	else{
		cout<<"����ż��."<<endl;
}
	}
	
	cin.get();
	return 0;
}
