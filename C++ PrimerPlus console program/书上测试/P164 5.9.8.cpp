#include<iostream>
#include<cstring>
int main(){
	using namespace std;
	char word[30];
	int i=0;
	cout<<"Enter words (to stop, type the word done):\n";
	cin>>word;
	while (strcmp(word,"done"))
	{
		cin>>word;
		i++;
	}
	cout<<"You entered a total of "<<i<<" words.";
	
	return 0;
}
