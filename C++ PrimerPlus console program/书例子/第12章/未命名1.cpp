#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

class Users{
	char* name;
	char* password;
public:
	Users();
	Users(char * n, char * p);
	bool judge();
};

Users::Users(){
}

Users::Users(char * n, char * p){
	name=n;
	password=p;	
}

bool Users::judge() {
}

int main(){
 	char str1[50];
 	char str2[50];
 	cout<<"Your name: ";
 	cin>>str1;
 	cout<<"PassWord: ";
 	cin>>str2;
 	Users cstr(str1,str2);

 	system("pause");
 	return 0;
 }
