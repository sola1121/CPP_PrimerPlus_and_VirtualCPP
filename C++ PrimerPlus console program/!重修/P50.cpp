#include <iostream>
using std::cout;
using std::endl;
int main(){
	cout<<"This is a single char input by 'cout'\n"
		<<'$'<<endl;
	cout<<"This is also a single char but will input by 'cout.put()'\n";
	cout.put('$');
	cout<<"\n";
	
	cout<<"\u00F6";
	cout<<"\n";
	system("pause");
	return 0;
}
