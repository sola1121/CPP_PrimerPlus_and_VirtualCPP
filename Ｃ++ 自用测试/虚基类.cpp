/*
 ���������

 ��ΪA->B->D, A->C->D  D�н���������A�ĳ�Ա
 ���������ݳ�Ա�Ŀ���ֽ����һ�� 

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
	m_d.a=120;     //���������͵�m_d.B::a=120 �� m_d.C::a=120 
	
	system("pause");
	return 0;
} 
