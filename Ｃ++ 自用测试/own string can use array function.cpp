#include<iostream>
#include<string>
int main(){
	using namespace std;
	string word;
	cin>>word;
	cout<<"Check for every one: "<<endl;
	for (int i=0;i<word.size();i++)
	{
		cout<<"The "<<i+1<<": ";
		cout<<word[i]<<"\n";
	}
	
	return 0;
}
