//输入身高,将厘米转化为米和毫米
#include<iostream>

int main(){
	using namespace std;
	int cm, mm;
	float m;
	cout<<"输入你的身高(厘米): _____ \b\b\b\b\b\b";
	cin>>cm;
	mm=cm*10;
	m=cm/100.0f;
	cout<<"你的身高: "<<mm<<" 毫米(mm)"<<endl;
	cout<<"你的身高: "<<m<<" 米(m)"<<endl;

	cin.get();
	return 0;
}
