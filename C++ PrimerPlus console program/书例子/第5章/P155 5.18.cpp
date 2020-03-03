#include<iostream>
int main(){
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail()==false)
	{
		count<<ch;
		++count;
		cin.get(ch);	
	} 
	cout<<endl<<count<<" characters read\n";
	
	cin.get();
	return 0;
}
