#include <iostream>
#include <stdio.h>

using namespace std;

double warming=0.3;   //将会被引用的外部变量 

extern void update(double dt);
extern void local();

int main(){
	cout<<"Gloable warming is "<<warming<<" degrees.\n";
	update(warming);
	cout<<"Gloable warming is "<<warming<<" degrees.\n";
	local();
	cout<<"Gloable warming is "<<warming<<" degrees.\n";
	
	system("pause");
	return 0;
}
