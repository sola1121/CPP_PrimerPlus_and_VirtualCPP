#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int a=10;
	int* psome=new int;
	psome=&a;
	cout<<psome<<endl;
	char p_ch[30]="rabbit";
	strcpy(p_ch, "rocket");
	cout<<*p_ch<<endl<<p_ch<<endl;
		
	system("pause");
	return 0;
}
