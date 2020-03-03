#include <iostream>
double hmean(double a, double b);

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	
	double x, y, z;
	cout<<"Enter two numbers: ";
	
	while (cin>>x>>y){
		try{
			z=hmean(x, y);			
		}
		catch (const char * s) {   //使用字符串类型处理返回的异常 
			cout<<s<<endl;
			cout<<"Enter a new pair of numbers: ";
			continue;
		}
		cout<<"Harmonic mean of "<<x<<" and "<<y<<" is "<<z<<endl;
		cout<<"Enter next set of numbers <any characters to quit>: ";
	}
	
	cout<<"Bye~\n";
	system("pause");
	return 0;
}

double hmean(double a, double b){
	if (a==-b)
		throw "bad hmean() arguments: a=-b not allowed";
	return 2.0*a*b/(a+b);
}
