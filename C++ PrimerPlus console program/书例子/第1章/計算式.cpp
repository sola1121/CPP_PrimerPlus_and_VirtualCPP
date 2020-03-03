#include <iostream>
#include <cmath> 
int main()
{
using namespace std;
	
	double X;
	double Y;
	double Z;
	
	cout<<"下面的程式将计算一个算式."<<endl;
	cout<<"那么请输入一个X的值: ";  
	cin>>X;
	Y=sqrt(X);  Z=Y+560*X;
	cout<<"计算结果为: "<<Z<<endl;
	cout<<"计算完毕...";
	system("pause"); 
	return 0; 
}
