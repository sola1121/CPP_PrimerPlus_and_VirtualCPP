#include <iostream>
#include <cstring>

int main(){
	using std::string;
	using std::cout;
	using std::endl; 
	
	string a("ABCDEFG");
	
	cout<<"a :"<<a<<endl;
	
	string b(a,2,4);
	cout<<"b: "<<b<<endl;
	
	
	system("pause");
	return 0;
}
