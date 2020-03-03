#include <iostream>
using std::cout;
#include "stringbad.h"

void callme1(StringBad &);
void callme2(StringBad);

int main(){
	using std::endl;
	{
		cout<<"Starting an inner block.\n";
		StringBad headline1("Celery Stalks at Midnight");
		StringBad headline2("Lettuce Prey");
		StringBad sports("Spinach Leaves Bowl for Dollars");
		cout<<"headline1: "<<headline1<<endl;
		cout<<"headline2: "<<headline2<<endl;
		cout<<"Sports: "<<sports<<endl;
		
		callme1(headline1);
		cout<<"headline1: "<<headline1<<endl;
		callme2(headline2);    //error happen 
		cout<<"headline2: "<<headline2<<endl;
		
		cout<<"Initialize one object to another:\n";
		StringBad sailor = sports;  //将使用复制构造函数StringBad(const StringBad & str), 将导致计数的错误 
		cout<<"sailor: "<<sailor<<endl;
		cout<<"Assign one object to another:\n";
		StringBad knot;
		knot = headline1;
		cout<<"knot: "<<knot<<endl;
		cout<<"Exiting the block.\n";
	 } 
	
	cout<<"End of main()\n";
	system("pause");
	return 0;
}

void callme1(StringBad & rsb){
	cout<<"String passed by reference:\n";
	cout<<"   \""<<rsb<<"\"\n";
}

void callme2(StringBad sb){   //按值传递将出现错误 
	cout<<"String passed by value:\n";
	cout<<"   \""<<sb<<"\"\n";
}
