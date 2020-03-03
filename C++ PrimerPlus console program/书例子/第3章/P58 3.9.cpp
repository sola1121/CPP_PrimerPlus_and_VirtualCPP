#include<iostream>
int main(){
	using namespace std;
	float a = 2.34E22f;
	float b = a + 1.0F;
	
	cout<<"a = "<<a<<endl;
	cout<<"b - a = "<<b - a <<endl;
	
	cin.get();
	return 0;
}

//这是对float精度的验证,输出结果为0,因为float只在意a的前6位有效数,对于加在23位的1是未采用的 
