#include <iostream>

extern double warming;   //引用变量

void update(double dt);
void local();

std::cout;
void update(double dt){
	extern double warming;
	
	warming += dt;
	cout<<"Update gloable warming to "<<warming<<" degrees.\n";	
}

void local(){
	double warming = 0.8;   //一个新的同名局部变量,可以隐藏全局变量 
	
	cout<<"Local warming = "<<warming<<" degrees.\n";
	cout<<"But gloable warming = "<<::warming<<" degrees.\n";
} 
