#include<iostream>
const int Fave=27;
int main(){
	using namespace std;
	int n;
	cout<<"Enter a number in the range 1 ~ 100 to find my favorite number: ";
	cin>>n;
	do{
	if (n<Fave)
		cout<<"Too low -- guess again: ";
	else if (n>Fave)
		cout<<"Too high -- guess again: ";
	cin>>n;
	} while (n!=Fave);
	cout<<"\n"<<Fave<<" is right.";
	
	cin.get();
	return 0;
} 
