#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a="computer";
	for (int i=a.size(); i>=0; i--){
		cout<<a[i];
	}
	cout<<endl;
	char b[]="computer";
	for (int i=0; i<=strlen(b); i++){
		cout<<*(b+i);
	} 
	cout<<endl;
	
	
	system("pause");
	return 0;
}
