#include<iostream>
int main(){
	using namespace std;
	cout<<"This program may reformat your hard disk\n"
		<<"and destroy all you date.\n"
		<<"Do you wish to contiune? <y/n>";
	char ch;
	cin>>ch;
	if (ch=='y'||ch=='Y')
		cout<<"You were warned!\a\a\n";
	else if (ch=='n'||ch=='N')
		cout<<"A wise choice...bye\n";
	else 
		cout<<"That wasn't a y or n! Apparently you can't follow \n"
			<<"instructions, so I'll trash your disk anyway.\a\a\a\n";
	
	cin.get();
	return 0;
}
