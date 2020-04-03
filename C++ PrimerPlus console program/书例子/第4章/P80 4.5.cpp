#include<iostream>
int main(){
	using namespace std;
	const int Arsize=30;
	char name[Arsize];
	char dessert[Arsize];
	
	cout<<"Enter your name: \n";
	cin.get(name,Arsize).get();
	cout<<"Enter your favorite dessert: \n";
	cin.get(dessert,Arsize).get();
	cout<<"I have some delocius "<<dessert<<" for you, "<<name<<".\n";
	
	cin.get();
	return 0;
}
