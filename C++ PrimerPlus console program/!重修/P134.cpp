#include <iostream>
using namespace std;
int main(){
	int a=0;
	while (a++<10)
		cout<<a<<endl;
	cout<<"\n";
	int x=3;
	int b=(1+x++)+(3+x++);
	x-=2;
	cout<<x<<endl;
	int c=1+x+++x+++3;
	cout<<"b= "<<b<<"\n";
	cout<<"c= "<<c<<"\n"; 
	
	
	system("pause");
	return 0;
}
