#include <iostream>
#include <cmath>
#include <cstring>
#include "exc_mean.h"

class demo {
	private:
		std::string word;
	public:
		demo(const std::string & str) {
			word = str;
			std::cout<<"demo "<<word<<" created\n";   //构造函数调用会输出word
		}
		~demo() {
			std::cout<<"demo "<<word<<" destoryed\n";    //析构函数调用会输出word
		}
		void show() const {
			std::cout<<"demo "<<word<<" lives!\n";   //查询word是否存在,输出word
		}
};

double hmean(double, double);
double gmean(double, double);
double means(double, double);

int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;
	{
		demo d1("found in block in main()");
		cout<<"Enter two numbers: ";
		while(cin>>x>>y) {
			try {
				z=means(x, y);
				cout<<"The mean mean of "<<x<<" and "<<y<<" is "<<z<<endl;
				cout<<"Enter next pair: ";
			} catch (bad_hmean & bg) {
				bg.mesg();
				cout<<"Try again\n";
				continue;
			} catch (bad_gmean & hg) {
				cout<<hg.mesg();
				cout<<"Values uesd: "<<hg.v1<<", "<<hg.v2<<endl;
				cout<<"Sorry, you don't get to play any more.\n";
				break;
			}
		}
		d1.show();   //输出对象的d1中的word
	}
	cout<<"Bye~\n";
	cin.get();
	cin.get();

	system("pause");
	return 0;
}

double hmean(double a, double b) {
	if (a==-b)
		throw bad_hmean(a, b);   //使用构造函数传递值
	return 2.0*a*b/(a+b);
}

double gmean(double a, double b) {
	if (a<0 || b<0)
		throw bad_gmean(a, b);   //使用构造函数传递值
	return std::sqrt(a*b);
}

double means(double a, double b) {
	double am, hm, gm;
	demo d2("found in means()");
	am=(a+b)/2.0;
	try {
		hm=hmean(a,b);
		gm=gmean(a,b);
	} catch (bad_hmean & bg) {
		bg.mesg();
		std::cout<<"Caught in means()\n";    //这一部分没有执行, 而是向上到了main()中 
		throw;
	}
	d2.show();
	return (am+hm+gm)/3.0;
}
