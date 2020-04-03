#include<iostream>
#include<cmath>
using namespace std;
double JPY(double JY){
	double CNY=JY*0.05284;
	return CNY;
}
int main(){
	double JY; 
	cout<<"请输入日元金额: ";cin>>JY;cout<<endl;
	double got;
	got=JPY(JY);
	cout<<"兑换的人民币金额为: "<<got<<" 元." <<endl;
	cout<<" "<<endl;
	system("pause");
	return 0;
}
