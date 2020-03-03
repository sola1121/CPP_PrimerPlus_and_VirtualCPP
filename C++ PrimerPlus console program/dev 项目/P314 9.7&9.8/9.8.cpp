#include <iostream>

extern int tom;
static int dick=10;
int harry=200;

void remote_access(){
	using std::cout; using std::endl;
	cout<<"remote_access() reports the following address:\n";
	cout<<"&tom = "<<&tom<<", &dick = "<<&dick<<", &harry = "<<&harry<<endl;
}
