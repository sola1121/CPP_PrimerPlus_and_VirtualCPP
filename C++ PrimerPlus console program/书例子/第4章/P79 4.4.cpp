#include<iostream>
int main(){
	using namespace std;
	const int Arsize=30;
	char name[Arsize];
	char dessert[Arsize];
	
	cout<<"Enter your name: \n";
	cin.getline(name,Arsize);
	cout<<"Enter your favorite dessert: \n";
	cin.getline(dessert,Arsize);
	cout<<"I have some delicius "<<dessert<<" for you, "<<name<<".\n";
	
	cin.get();
	return 0;
}
