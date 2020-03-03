#include<iostream>
int main(){
	using namespace std;
	cout<<"What's year was your house built?\n";
    char year[10];
    cin.getline(year,10);
	cout<<"What is its street address?\n";
	char address[80];
	cin.getline(address,80);
	cout<<"Year built: "<<year<<endl;
	cout<<"Address: "<<address<<endl;
	cout<<"Done!";
	
	cin.get();
	return 0;
}
