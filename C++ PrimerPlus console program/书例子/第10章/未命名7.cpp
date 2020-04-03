#include <iostream>

class Test{
	int a;
	int b;
public:
	Test(){
	}
	Test(int ,int);
	~Test(){ std::cout<<"Here\n";
	}
	int sum(int ,int);
	void show();
	void getnum();
};

Test::Test(int x, int y){
	a=x;
	b=y;
}

void Test::show(){
	std::cout<<"The a is: "<<a<<" ,b is: "<<b;
}

void Test::getnum(){
	a=99;b=88;
}

int Test::sum(int x, int y){
	return x+y;
}

int main(int argc, char** argv) {
{
	using std::cout;
	int a=2, b=3, c;
	Test xxx=Test(a,b);
	c=xxx.sum(a,b);
	cout<<c;
	xxx.getnum();
	xxx.show();
}
	system("pause");
	return 0;
}
