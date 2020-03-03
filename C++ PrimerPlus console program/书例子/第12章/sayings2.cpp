#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string1.h"

const int Arsize=10;
const int Maxlen=81;

int main(int argc, char** argv) {
	using namespace std;
	String name;
	cout<<"Hi, what's your name?\n>> ";
	cin>>name;
	
	cout<<name<<", please enter up to "<<Arsize<<" short sayings < empty line to quit>:\n";
	String sayings[Arsize];
	char temp[Maxlen];
	int i;
	for (i=0; i<Arsize; i++){
		cout<<i+1<<": ";
		cin.get(temp, Maxlen);
		while (cin&&cin.get())
			continue;
		if (!cin||temp[0]=='\0')
			break;
		else
			sayings[i]=temp;
	}
	int total=i;
	
	if (total>0){
		cout<<"Here are your sayings:\n";
		for (i=1; i<total; i++)
			cout<<sayings[i]<<"\n";
				
	//use pointer to keep track of shortest, first strings
	String * shortest=&sayings[0];    //initialize to first object
	String * first=&sayings[0];
	for (i=1; i<total; i++){
		if (sayings[i].length()<shortest->length())
			shortest=&sayings[i];
		if (sayings[i]<*first)   //compare values
			first=&sayings[i];   //assign address
	}
	cout<<"Shortest saying:\n"<<*shortest<<endl;
	cout<<"First alphabetiacally:\n"<<*first<<endl;
	srand(time(0));
	int choice = rand()%total;
	//use new to create, initialize new string object
	String * favorite = new String(sayings[choice]);
	cout<<"My favoritevsaying:\n"<<*favorite<<endl;
	delete favorite;
	}
	else
		cout<<"Not much to say, eh?\n";
	cout<<"Bye.\n";
	
	system("pause");
	return 0;
}
