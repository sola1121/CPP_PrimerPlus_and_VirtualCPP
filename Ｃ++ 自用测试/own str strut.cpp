#include<iostream>
#include<string>
struct inflatable{
	char name[30];
	int num1;
	double num2;
};
struct sstring{
	std::string str;
	double jk;
};

int main(){
	using namespace std;
	inflatable guest[2]{
		{"abcdefg",10,2.3},
		{"hijklmn",20,4.6},
	};
	sstring sstr[2]{
		{"opqrstu",56.36},
		{"vwxyz00",36.56},
	};
	
	cout<<"guest[0]: "<<sizeof(guest[0])<<endl;
	cout<<"guest[0].name: "<<sizeof(guest[0].name)<<endl;
	cout<<"guest[0].num1: "<<sizeof(guest[0].num1);
	cout<<endl<<endl;
	cout<<"sstr[0]: "<<sizeof(sstring[0])<<endl;
	cout<<"sstr[0].str: "<<sizeof(sstr[0].str)<<" use sizeof()\n"
		<<sstr[0].str.size()<<" use .size"<<endl;
		
	return 0;
}
