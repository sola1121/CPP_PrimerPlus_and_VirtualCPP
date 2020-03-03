#include<iostream>
#include<string>
int main(){
	using namespace std;
	char ch[20];
	cin.getline(ch,20);
	string str="abc123";
	if(ch==str)
		cout<<"相等";
	else 
		cout<<"不相等";
		
	cin.get();
	return 0;	
}
