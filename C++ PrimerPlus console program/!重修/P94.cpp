#include <iostream>
using namespace std;
union un{
	int a;
	char b;
};

int main(){
	un x {2};
	un y {5};
	cout<<x.a<<"   "<<x.b<<endl;
	cout<<y.a<<"   "<<y.b<<endl;
	
	system("pause");
	return 0;	
}
