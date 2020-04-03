#include<iostream>
#include<cstring>
char * getname(void);
int main(){
	using namespace std;
	char * name;
	name=getname();
	cout<<name<<"~";
	delete [] name;
	
	return 0;
}

char * getname()
{
	char ch[100];
	std::cout<<"Enter words: ";
	std::cin>>ch;
	char * ps = new char[strlen(ch)+1];
	strcpy(ps,ch);
	
	return ps;
}
