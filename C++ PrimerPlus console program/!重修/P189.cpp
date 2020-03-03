#include <iostream>
using namespace std;
int main(){
	int i;
	/*while(cin>>i){
		cin.clear();
		cout<<"you should enter a number.\n";
		continue;
	}*/
	x: bool test=bool(cin>>i);
	cout<<test<<endl;
	cin.clear();
	goto x;
	
	system("pause");
	return 0;
}
