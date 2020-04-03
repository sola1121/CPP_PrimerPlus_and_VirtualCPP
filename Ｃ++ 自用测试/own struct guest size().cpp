#include<iostream>
#include<cstring>
#include<string>
struct A{
	char name[40];
	int num;
};
int main(){
	using namespace std;
	A B[2]={
		{"abcdefg",10},
		{"hijklma",20}
	};

	cout<<B[0].name<<"  "<<B[0].num<<endl;
	cout<<B[1].name<<"  "<<B[1].num<<endl;
	
	cout<<strlen(B[0].name);
	
	return 0;
}
