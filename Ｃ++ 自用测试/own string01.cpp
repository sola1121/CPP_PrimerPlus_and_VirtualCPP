#include<iostream>
#include<string>
int main(){
	using namespace std;
	char ch[20];
	cin.getline(ch,20);
	string str="abc123";
	if(ch==str)
		cout<<"���";
	else 
		cout<<"�����";
		
	cin.get();
	return 0;	
}
