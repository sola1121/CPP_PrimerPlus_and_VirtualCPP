#include <iostream>
using namespace std;
int main(){
	int * p_pointer, a=9;
	p_pointer=&a;
	
	cout<<*p_pointer<<"   *pointer"<<endl;
	cout<<p_pointer<<"    pointer"<<endl;
	
	system("pause");
	return 0;
	
}
