#include<iostream>
struct fa
{
	char ch[30];
	double num;	
};

int main(){
	using namespace std;
	fa * in = new fa;
	cin.get(in->ch,30);
	cin>>(in->num);
	cout<<(*in).ch<<"\n";
	cout<<(*in).num;
	delete in;
	
	return 0;
}
