#include <iostream>
#include <cstdlib>
#include "case06.h"

using namespace std;

Rect::Rect(){
	m_x=m_y=rand();
}

Rect::Rect(int x, int y){
	m_x=x;
	m_y=y;
}
//复制构造函数 
Rect::Rect(Rect &r){
	cout<<"Rect复制构造函数&r \n";
	this->m_x=r.getX();
	this->m_y=r.getY();
}

Rect::Rect(Rect *r){
	cout<<"Rect复制构造函数*r \n";
	m_x=r->getY();
	m_y=r->getX();
}

Rect::~Rect(){
	cout<<"Rect析构函数\n";
}

int Rect::getX(){
	return m_x;
}

int Rect::getY(){
	return m_y;
}

int main(int argc, char** argv) {
	Rect *X, *Y;
	X=new Rect(7,8);
	Y=new Rect(X); 
	X->show(); 
	Y->show();
	
	cout<<endl;

	Y->show();
	
	cout<<&X<<" compare "<<&Y<<endl;
	
	 
	delete X; 
	delete Y; 
	
	
	system("pause");
	return 0;
}
