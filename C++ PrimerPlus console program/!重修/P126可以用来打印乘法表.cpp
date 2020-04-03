//可以用来打印乘法表 

#include <iostream>
using namespace std;
const int num=10;
int main(){
	for (int i=9; i; i--)
		cout<<"* ";
	cout<<endl;
	unsigned int result;	
	for (int a=0; a<=num; a++){
		for (int b=a; b>=1; b--){
			result=a*b;
			cout<<a<<"="<<result<<"\n";
		}
	}
	
	system("pause");
	return 0;
}
