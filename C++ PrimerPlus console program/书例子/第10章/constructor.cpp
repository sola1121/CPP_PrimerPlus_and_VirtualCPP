#include <iostream>

class Test{
	int a;
	int b;
public:
	Test();
	Test(int ,int);
	~Test();
	int sum(int ,int);
};

Test::Test(int x, int y){
	a=x;
	b=y;
}

int Test::sum(int x, int y){
	return x+y;
}

int main(int argc, char** argv) {
	using std::cout;
	int a=2, b=3, c;
	Test xxx=Test(a,b);
	c=xxx.sum(a,b);
	cout<<c;
	
	system("pause");
	return 0;
}
