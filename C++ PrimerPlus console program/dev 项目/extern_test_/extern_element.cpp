#include <iostream> 

extern double warming;

void update(double);
void local();

using std::cout;
void update(double dt){
	extern double warming;
	
	warming +=dt;
	cout<<"Update gloable warming to "<<warming<<" degrees.\n";
}

void local(){
	double warming=0.8;
	
	cout<<"Local warming = "<<warming<<" degrees.\n";
	cout<<"But gloable warming = "<<::warming<<" degrees.\n";
}
