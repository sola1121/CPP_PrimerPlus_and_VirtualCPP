#include <iostream>
#include "ch04_11.cpp"

using namespace std;

const float Test::y=10.5;

Test::Test(float f): x(f), s(f){}

void Test::show(){
	cout<<"x="<<x<<"   "<<"y="<<y<<"   "<<"s="<<s<<endl;
}

int main(int argc, char** argv) {
	Test t1(55.55), t2(0);
	t1.show();
	t2.show();
		
	system("pause");
	return 0;
}
