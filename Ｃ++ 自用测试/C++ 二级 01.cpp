/* 派生类声明对象时,先执行基类的构造,在执行派生自己的,释放时相反 */
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
