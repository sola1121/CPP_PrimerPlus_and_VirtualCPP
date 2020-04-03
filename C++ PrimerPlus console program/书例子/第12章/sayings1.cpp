#include <iostream>
#include "string1.h"
const int Arsize=10;
const int Maxlen=81;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using std::cout;
	using std::cin;
	using std::endl;
	
	String name;
	cout<<"Hi, what's your name?\n>>";
	cin>>name;
	
	cout<<name<<", please enter up to "<<Arsize<<" short sayings <empty line to quit>:\n";
	String sayings[Arsize];
	char temp[Maxlen];
	int i;
	for (i=0; i<Arsize; i++){  //break打破的循环 
		cout<<i+1<<": ";
		cin.get(temp, Maxlen);
		while (cin&&cin.get()!='\n')  //continue重回的循环 
			continue;
		if (!cin||temp[0]=='\0')
			break;
		else
			sayings[i]=temp;
	}
	int total=i;
	
	if (total>0){
		cout<<"Here are your saying:\n";
		for (i=0; i<total; i++)
			cout<<sayings[i][0]<<": "<<sayings[i]<<endl;
		//输出最短的字符	
		int shortest=0;
		int first=0;
		for (i=1; i<total; i++){
			if (sayings[i].length()<sayings[shortest].length())
				shortest=i;
			if (sayings[i]<sayings[first])
				first=i;
		}
		cout<<"Shortest saying: \n"<<sayings[shortest]<<endl;
		cout<<"First alphabetically: \n"<<sayings[first]<<endl;
		cout<<"This program used "<<String::howmany()<<" String objects. Bye.\n";
	}
	else
		cout<<"No input! Bye.\n";
	return 0;
	
	system("pause");
	return 0;
}
