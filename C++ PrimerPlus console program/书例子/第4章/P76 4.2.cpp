#include<iostream>
#include<cstring>
int main(){
	using namespace std;
	const int size = 15;
	char name1[size];       //δ���г�ʼ�� 
	char name2[size]= "C++owboy";       //���г�ʼ�� 
	
	cout<<"Howdy! I'm"<<name2<<"! What's your name?\n";
	cin>>name1;
	cout<<"Well, "<<name1<<", your name has ";
	cout<<strlen(name1)<<" letters and is stroed\n";
	cout<<" in an arrary of "<<sizeof(name1)<<" bytes.\n";
	cout<<"Your initial is "<<name1[0]<<". \n";
	name2[3]='\0';               //�����Ă��Ğ���ַ� 
	cout<<"Here are the first 3 characters of my name: ";
	cout<<name2<<endl;
	
	cin.get();
	return 0;
}
