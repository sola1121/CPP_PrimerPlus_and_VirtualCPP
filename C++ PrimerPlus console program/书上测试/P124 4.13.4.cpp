#include<iostream>
#include<cstring>
int main(){
	using namespace std;
	string f_name, l_name, full_name;
	cout<<"Enter your first name: ";
	cin>>f_name;
	cout<<"Enter your last name: ";
	cin>>l_name;
	full_name = l_name + ", " + f_name;
	cout<<"Here is the information in a single string: "<<full_name;
	
	cin.get();
	return 0;
}
