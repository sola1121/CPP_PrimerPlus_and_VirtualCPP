#include <iostream>
int main(){
	using namespace std;
	int a[3];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	int s,d,f;
	s=a[0]+a[1];
	d=a[0]+a[2];
	f=a[1]+a[2];
	cout<<s<<endl;
	cout<<d<<endl;
	cout<<f<<endl;
	cin.get();
	return 0;
}
