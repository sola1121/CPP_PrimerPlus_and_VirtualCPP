#include<iostream>
#include<vector>
int main(){
	using namespace std;
	cout<<"What is your first name?";
	char firstname[50];
	cin.getline(firstname, 50);
	cout<<"What is your last name?";
	char lastname[50];
	cin.getline(lastname, 50);
	char gr[10];
	cout<<"What letter grade do you deserve?";
	cin.getline(gr, 10);
	cout<<"What is your age?";
	int a;
	cin>>a;
	
	cout<<"Name: "<<lastname<<", "<<firstname<<"\n"
		<<"Grade: "<<gr<<"\n"
		<<"Age: "<<a<<endl;
		
	cin.get();
	return 0;
}
