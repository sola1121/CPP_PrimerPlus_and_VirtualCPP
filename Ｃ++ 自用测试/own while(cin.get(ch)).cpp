#include<iostream>
int main(){
	using namespace std;
	char ch;
	int count = 0;
	while (cin.get(ch))
	{
		count<<ch;
		++count;
	} 
	cout<<endl<<count<<" characters read\n";
	
	cin.get();
	return 0;
}
