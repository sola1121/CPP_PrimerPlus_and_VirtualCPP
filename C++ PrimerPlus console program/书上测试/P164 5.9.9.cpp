#include<iostream>
#include<string>
int main(){
	using namespace std;
	string word;
	int i=0;
	cout<<"Enter words (to stop, type the word done):\n";
	cin>>word;
	while (word!="done")
	{
		cin>>word;
		i++;
	}
	cout<<"You entered total of "<<i<<" words";
	
	return 0;
}
