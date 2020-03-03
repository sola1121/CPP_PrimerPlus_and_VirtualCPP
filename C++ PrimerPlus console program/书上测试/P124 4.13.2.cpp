#include<iostream>
#include<string>
char ch(void);
int main(){
	using namespace std;
	string name, dessert;
	cout<<"Enter your name:"<<"\n";
	getline(cin, name);
	cout<<"Enter your favorite dessert:"<<"\n";
	getline(cin, dessert);
	cout<<"I have some delicious "<<dessert<<" for you, "<<name<<". ";
	
	cin.get();
	return 0;
}
