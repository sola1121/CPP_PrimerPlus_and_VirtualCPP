#include<iostream>
#include<cstring>
int main(){
	using namespace std;
	const int size = 15;
	char name1[size];       //未进行初始化 
	char name2[size]= "C++owboy";       //进行初始化 
	
	cout<<"Howdy! I'm"<<name2<<"! What's your name?\n";
	cin>>name1;
	cout<<"Well, "<<name1<<", your name has ";
	cout<<strlen(name1)<<" letters and is stroed\n";
	cout<<" in an arrary of "<<sizeof(name1)<<" bytes.\n";
	cout<<"Your initial is "<<name1[0]<<". \n";
	name2[3]='\0';               //將第四個改為空字符 
	cout<<"Here are the first 3 characters of my name: ";
	cout<<name2<<endl;
	
	cin.get();
	return 0;
}
