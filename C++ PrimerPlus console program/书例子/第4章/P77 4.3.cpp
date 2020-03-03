 #include<iostream>
 int main(){
 	using namespace std;
 	const int Arsize=20;
 	char name [Arsize];
 	char dessert [Arsize];
 	
 	cout<<"Enter your name: \n";
 	cin>>name;
 	cout<<"Enter your favorite dessert: \n";
 	cin>>dessert;
 	cout<<"I have some delicious "<<dessert<<" for you, "<<name<<". \n";
 	
 	cin.get();
 	return 0;
 }
