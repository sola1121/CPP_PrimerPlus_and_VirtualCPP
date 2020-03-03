#include<iostream>
int main(){
	using namespace std;
	int auks, bats, coots;
	
	auks = 19.99 + 11.99;
	//adds the values as double, then converts the result to int
	
	bats = int (19.99) + int (11.99);
	coots = int (19.99) + int (11.99);  //adds double as int
	cout<<"auks = "<<auks<<", bats = "<<bats;
	cout<<", coots = "<<coots<<endl;
	
	char ch='Z';
	cout<<"The code for "<<ch<<" is ";  //print as char
	cout<<int (ch)<<endl;   //print as int
	cout<<"Yes, the code is ";
	cout<<static_cast<int>(ch)<<endl;
	
	cin.get();
	return 0;
}
