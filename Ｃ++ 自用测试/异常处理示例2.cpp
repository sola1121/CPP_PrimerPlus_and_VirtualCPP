#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;
//��������������,����� 
double area(double a, double b, double c) throw(invalid_argument){    //invalid_argument����logic_error 
	//�����α߳��Ƿ�Ϊ�� 
	if (a<=0||b<=0||c<=0)
		throw invalid_argument("the side length should be positive");
	//���߹�ϵ�Ƿ��������ǲ���ʽ
	if (a+b<=c||a+c<=b||b+c<=a)
		throw invalid_argument("the side length should fit the triangle inequation");
	//�������
	double s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
	double a, b, c;
	re: cout<<"Please enter the length of triangle: \n";
	cin>>a>>b>>c;
	try{
		double s=area(a,b,c);
		cout<<"The triangle's area is "<<s<<endl;
	}
	catch(exception & e){
		cout<<"Error: "<<e.what()<<endl; 
		goto re;
	}
}
