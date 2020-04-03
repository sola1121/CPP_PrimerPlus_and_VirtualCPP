#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;
//给出三角形三边,求面积 
double area(double a, double b, double c) throw(invalid_argument){    //invalid_argument来自logic_error 
	//三角形边长是否为正 
	if (a<=0||b<=0||c<=0)
		throw invalid_argument("the side length should be positive");
	//三边关系是否满足三角不等式
	if (a+b<=c||a+c<=b||b+c<=a)
		throw invalid_argument("the side length should fit the triangle inequation");
	//计算面积
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
