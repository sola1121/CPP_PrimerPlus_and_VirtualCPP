#include <iostream>
using namespace std;
int main(){
	int * a=new int[12];
	int i=0;
	while (cin>>a[i++])
		cout<<*(a+1);
		
	delete [] a;	
	return 0;
}
