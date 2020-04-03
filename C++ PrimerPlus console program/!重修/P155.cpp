#include <iostream>
using namespace std;
int main(){
	char ch;
	int count=0;
	cin>>ch;
	while (cin.fail()!=1){
		cout<<"You input character: "<<ch<<"\n";
		++count;
		cin>>ch;
	}
	cout<<endl<<"You have input: "<<count<<" times."<<endl;
	
	system("pause");
	return 0;
}
