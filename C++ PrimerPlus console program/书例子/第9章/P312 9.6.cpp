#include <iostream>

extern double warming;   //���ñ���

void update(double dt);
void local();

std::cout;
void update(double dt){
	extern double warming;
	
	warming += dt;
	cout<<"Update gloable warming to "<<warming<<" degrees.\n";	
}

void local(){
	double warming = 0.8;   //һ���µ�ͬ���ֲ�����,��������ȫ�ֱ��� 
	
	cout<<"Local warming = "<<warming<<" degrees.\n";
	cout<<"But gloable warming = "<<::warming<<" degrees.\n";
} 
