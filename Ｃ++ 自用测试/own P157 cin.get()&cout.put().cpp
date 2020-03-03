#include<iostream>
int main(){
	using namespace std;
	int ch,count=0;
	ch = cin.get();
	while (ch!=EOF)
	{
		cout.put(ch);
		++count;
		ch = cin.get();
	}
	cout<<count<<" characters\n";
	cout.put(count);
	
	cin.get();
	return 0;
}
