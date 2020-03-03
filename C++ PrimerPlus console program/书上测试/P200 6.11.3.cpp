#include<iostream>
int main(){
	using namespace std;
	cout<<"Please enter one of the following choices:\n"
		"c) carnivore          p) pianist\n"
		"t) tree               g) game\n";
	char ch;
	x : cin>>ch;
	switch(ch)
	{
	case 'c' : cout<<"You choose carnivore."; break;
	case 'p' : cout<<"You choose pianist."; break;
	case 't' : cout<<"You choose tree."; break;
	case 'g' : cout<<"You choose game."; break;
	default : cout<<"Please enter a  c, p, t, g: "; goto x;
	}
	
	cin.get();
	return 0;
}
