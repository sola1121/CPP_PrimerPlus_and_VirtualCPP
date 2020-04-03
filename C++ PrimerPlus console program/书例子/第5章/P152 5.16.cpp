#include<iostream>
int main(){
	using namespace std;
	char ch;
	int count = 0;
	cout<<"Enter characters; enter # to quit:\n";
	cin>>ch;
	while (ch!='#')
	{
		cout<<ch<<"\n";
		++count;
		cin>>ch;
	}
	cout<<endl<<count<<" characters read\n";
	
	cin.get();
	return 0;
}
