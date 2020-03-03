#include<iostream>
const int strsize=30;
struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

int main(){
	using namespace std;
	cout<<"Benevolent Order of Programers Report\n"
		"a. display by name      b. display by title\n"
		"c. display by bopname   d. dispaly by preference\n"
		"q. quit\n";
	bop info[5]=
	{
		{"Wimp Macho","English Teacher","DEMON",0},
        {"Raki Rhodes","Junior Programmer","BOOM",1},
        {"Celia Laiter","Super Star","MIPS",2},
        {"Hoppy Hipman","Analyst Trainee","WATEE",1},
        {"Pat Hand","Police","LOOPY",2}
	};
	
	char ch;
	cout<<"Enter you choice: ";
	enterch : cin>>ch;
	if (ch=='a'){
		for (int i=0;i<5;i++)
			cout<<info[i].fullname<<"\n";
		cout<<"Next choice: ";
		goto enterch;
	}
	else if (ch=='b'){
		for (int i=0;i<5;i++)
			cout<<info[i].title<<"\n";
		cout<<"Next choice: ";
		goto enterch;
	}
	else if (ch=='c'){
		for (int i=0;i<5;i++)
			cout<<info[i].bopname<<"\n";
		cout<<"Next choice: ";
		goto enterch;
	}
	else if (ch=='d'){
			for(int i=0;i<5;i++){
            	if(info[i].preference==0)
           		cout<<info[i].fullname<<endl;
            	else if(info[i].preference==1)
            	cout<<info[i].title<<endl;
           		else if(info[i].preference==2)
            	cout<<info[i].bopname<<endl;
            }
	}
	else if (ch=='q'){
		cout<<"bye~\n";
	}
	else {
		cout<<"Please enter a right choice.\n";
		cout<<"Next choice: ";
		goto enterch;
	}
	
	cin.get();
	return 0;
}
