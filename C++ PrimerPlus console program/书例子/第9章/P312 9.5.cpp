#include <iostream>
#include <stdio.h>

using namespace std;

double warming=0.3;   //���ᱻ���õ��ⲿ���� 

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
