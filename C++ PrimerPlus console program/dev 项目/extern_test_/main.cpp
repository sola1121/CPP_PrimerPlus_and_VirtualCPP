#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double warming = 0.3;

void update(double dt);
void local();

int main(int argc, char** argv) {
	cout<<"Gloable warming is "<<warming<<" degrees.\n";
	update(0.1);
	cout<<"Gloable warming is "<<warming<<" degrees.\n";
	local();
	cout<<"Gloable warming is "<<warming<<" degrees.\n";
	
	system("pause"); 
	return 0; 
}
