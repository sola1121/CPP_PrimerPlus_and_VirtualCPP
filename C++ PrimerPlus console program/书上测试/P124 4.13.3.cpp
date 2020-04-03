#include<iostream>
#include<cstring>
int main(){
	using namespace std;
	char firstname[20], lastname[20], fullname[42];
	cout<<"Enter your first name: ";
	cin.getline(firstname, 20);
	cout<<"Enter your last name: ";
	cin.getline(lastname, 20);
	strcat(fullname, firstname);
	strcat(fullname, ", ");
	strcat(fullname, lastname);
	fullname[42]='\0';
	cout<<"Here is the information in a single string: "<<fullname;
	
	cin.get();
	return 0;
}
