/* ��������������ʱ,��ִ�л���Ĺ���,��ִ�������Լ���,�ͷ�ʱ�෴ */
#include <iostream>
using namespace std;

class A{
public:
	A(){ cout<<"A"; }
	~A(){ cout<<"~A"; }
}; 

class B: public A{
private:
	A * p;
public:
	B() { cout<<"B"; p=new A(); }
	~B() { cout<<"~B"; delete p; }
};

int main() {
	B obj;
	return 0;
}
