/*
 避免二义性

 因为A->B->D, A->C->D  D中将会有两个A的成员
 虚基类的数据成员的拷贝纸出现一次 

 */

#include <iostream>

using namespace std;

class A{
public:
	int a;
};

class B: virtual public A{
public:
	int b;
};

class C: virtual public A{
public:
	int c;
};

class D: public B, public C{
public:
	int d;
};

int main(){
	D m_d;
	m_d.a=120;     //不是虚基类就得m_d.B::a=120 或 m_d.C::a=120 
	
	system("pause");
	return 0;
} 
