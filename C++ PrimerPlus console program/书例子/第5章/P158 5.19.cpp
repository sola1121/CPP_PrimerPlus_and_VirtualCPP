#include<iostream>
int main(){
	using namespace std;
	int ch;
	int count = 0;
	
	while ((ch=cin.get())!=EOF)
	{
		cout.put(char(ch));1
		++count;
	}
	cout<<endl<<count<<" characters read\n";
	
	cin.get();
	return 0;
}
