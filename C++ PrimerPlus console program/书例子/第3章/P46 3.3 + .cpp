#include<iostream>
int main(){
	using namespace std;
	int chest{42};           //10
	int waist{0x42};         //16    
	int inseam{042};         //8
	
	cout<<"chest 42 = "<<chest<<endl;
	cout<<"waist 0x42 = "<<waist<<endl;
	cout<<"inseam 042 = "<<inseam<<endl;
	
	cin.get();
	return 0;
}
