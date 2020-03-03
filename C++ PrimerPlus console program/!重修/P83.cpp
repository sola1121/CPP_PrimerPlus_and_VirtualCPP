#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string a;
	(cin>>a).get();
	cout<<endl<<a[3]<<endl;
	
	string b;
	cin>>b;  //不会接受空格等空字符 要使用 getline(cin,b); 方式 
	cin.get();
	cout<<endl<<b.size()<<"  size()"<<endl;
	cout<<"\\n\n";
	
	system("pause");
	return 0;
}
