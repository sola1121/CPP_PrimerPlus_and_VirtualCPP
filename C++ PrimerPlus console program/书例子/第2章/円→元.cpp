#include<iostream>
#include<cmath>
using namespace std;
double JPY(double JY){
	double CNY=JY*0.05284;
	return CNY;
}
int main(){
	double JY; 
	cout<<"��������Ԫ���: ";cin>>JY;cout<<endl;
	double got;
	got=JPY(JY);
	cout<<"�һ�������ҽ��Ϊ: "<<got<<" Ԫ." <<endl;
	cout<<" "<<endl;
	system("pause");
	return 0;
}
