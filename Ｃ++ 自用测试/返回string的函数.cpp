#include <iostream>
#include <cstring>

using namespace std;

char tackle();

int main(){
	string a;
	a=tackle();
	cout<<a;
	
	cout<<endl;
	system("pause");
	return 0;
}

char tackle(){
	string str;
	int i;
	cout<<"Input a string: ";
	getline(cin,str);
	cout<<"Tell me what charater do you want?";
	cin>>i;
	if (str.size()<=0){
		cout<<"None character you inputed.";
	}
	else{
		if (str.size()<i){
			cout<<"Excess of total number.";
		}
		else
			return str[i-1];
	}
}
 
