#include <iostream>
using namespace std;
int main(){
	char a[]="abcd";
	char *b=a;
	cout<<*(b++)<<endl;
	cout<<*b<<"\n";
		
	system("pause");
	return 0;
}
