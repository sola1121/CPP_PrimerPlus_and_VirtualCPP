#include <iostream>
#include <cstring>
using namespace std;
struct num{
	int a;
	int b;
};

int main(){
	const static char a[21]="this";
	cout<<a<<endl;
	num * pa=new num;
	num ps;
	(pa->a)=10;
	pa->b=9;
	
	ps.a=1;
	ps.b=2;
	cout<<pa->a<<" here is a."<<endl;
	cout<<pa->b<<" here is b."<<endl;
	cout<<ps.a<<" here is ps.a"<<endl;
	cout<<ps.b<<" here is ps.b"<<endl<<pa+1<<endl;
	
	 
	system("pause");
	return 0;
}
