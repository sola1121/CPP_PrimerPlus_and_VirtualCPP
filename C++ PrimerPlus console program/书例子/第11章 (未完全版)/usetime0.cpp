#include <iostream>
#include "mytime0.h"


int main(int argc, char** argv) {
	using std::cout;
	using std::endl;
	
	Time planning;
	Time coding=Time(2,40);
	Time fixing=Time(5,55);
	Time total;
	
	cout<<"Planning time = ";
	planning.Show();
	cout<<endl;
	
	cout<<"coding time = ";
	coding.Show();
	cout<<endl;
	
	cout<<"fixing time = ";
	fixing.Show();
	cout<<endl;
	
	total=coding.Sum(fixing);
	total.Show();
	cout<<endl;
	
	system("pause");
	return 0;
}
