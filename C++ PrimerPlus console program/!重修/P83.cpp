#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string a;
	(cin>>a).get();
	cout<<endl<<a[3]<<endl;
	
	string b;
	cin>>b;  //������ܿո�ȿ��ַ� Ҫʹ�� getline(cin,b); ��ʽ 
	cin.get();
	cout<<endl<<b.size()<<"  size()"<<endl;
	cout<<"\\n\n";
	
	system("pause");
	return 0;
}
