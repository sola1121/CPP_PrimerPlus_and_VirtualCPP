#include <iostream>
#include "mytime1.h"

int main(){
	using std::cout;
	using std::endl;
	
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	
	cout<<"planning time = ";
	planning.show();
	cout<<endl;
	
	cout<<"coding time = ";
	coding.show();
	cout<<endl;
	
	cout<<"fixing time = ";
	fixing.show();
	cout<<endl;
	
	total=coding + fixing;
	cout<<"coding+fixing = ";
	total.show();
	cout<<endl;
	
	Time morefixing(3, 28);
	cout<<"more fixing time = ";
	morefixing.show();
	cout<<endl;
	total=morefixing.operator+(total);
	cout<<"morefixing.operator+(total) = ";
	total.Show();
	cout<<endl;
	
	system("pause");
	return 0;
}
