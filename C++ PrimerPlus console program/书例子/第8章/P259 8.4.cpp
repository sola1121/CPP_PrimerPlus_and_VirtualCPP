//用交换两个值的函数来探究引用,指针与值传递间的运行 
#include <iostream>
void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);

int main(){
	using namespace std;
	int wallet1=300, wallet2=350;
	cout<<"wallet1 = $"<<wallet1<<"  wallet2 = $"<<wallet2<<endl;
	
	cout<<"Using references to swap contents:\n";  //引用 
	swapr(wallet1,wallet2);
	cout<<"wallet1 = $"<<wallet1<<"  wallet2 = $"<<wallet2<<endl;
	
	cout<<"Using pointerd to swap contents again:\n";  //指针 
	swapp(&wallet1,&wallet2);
	cout<<"wallet1 = $"<<wallet1<<"  wallet2 = $"<<wallet2<<endl;
	
	cout<<"Tring to use passing by value:\n";   //值传递 
	swapv(wallet1,wallet2);
	cout<<"wallet1 = $"<<wallet1<<"  wallet2 = $"<<wallet2<<endl;
	
	system("pause");
	return 0;
} 

void swapr(int& a, int& b){
	int temp;
	temp = a;
	a=b;
	b=temp;
}

void swapp(int* p, int* q){
	int temp;
	temp = *p;
	*p=*q;
	*q=temp;
}

void swapv(int a, int b){
	int temp;
	temp = a;
	a = b;
	b=temp;
}
