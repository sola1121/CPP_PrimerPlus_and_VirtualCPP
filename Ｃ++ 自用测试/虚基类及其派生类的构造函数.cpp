/* ֻ����Զ������Ĺ��캯������������Ĺ��캯��, ����A����һ��*/

#include <iostream>

using namespace std;

class A{
public:
	A(int Aa){ a=Aa; } 
	int a;
};

class B: virtual public A{
public:
	B(int Aa):A(Aa) {}
	int b;
};

class C: virtual public A{
public:
	C(int Aa):A(Aa){}
	int c;
};

class D: public B, public C{
public:
	D(int Aa, int Bb, int Cc) : A(Aa), B(Bb), C(Cc){} 
	int d;
};

int main(){
	D m_d(1,2,3);
	m_d.d=120;
	
	system("pause");
	return 0;
}
