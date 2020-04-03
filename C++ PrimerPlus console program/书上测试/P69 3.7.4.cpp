#include<iostream>
int main(){
	using namespace std;
	long long x, d, h, m, s;
	cout<<"Enter the number of seconds: ";
	cin>>x;
	
	d=x/86400;
	h=x%86400/3600;
	m=x%86400%3600/60;
	s=x%86400%24%60;
	
	cout<<x<<" seconds = "<<d<<" days, "<<h<<" hours, "<<m<<" minutes, "<<s<<" seconds"<<endl;
	
	cin.get();
	return 0;
}
