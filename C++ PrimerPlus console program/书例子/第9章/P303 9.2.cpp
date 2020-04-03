#include <iostream>
#include "P301 9.1.h"
#include "P303 9.3.cpp"

using namespace std;
int main(){
	rect rplace;
	polar pplace;
	
	cout<<"Enter the x and y values: ";
	while (cin>>rplace.x>>rplace.y){
		pplace=rect_to_polar(rplace);
		show_polar(pplace);
		cout<<"Next two numbers (any characters to quit): ";
		}	
	
	cout<<"Bye~\n";
	system("pause");
	return 0;
}
