#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int Roll; 
	
	cout<<"这是一个生成一个随机数的程序."<<endl;
	cout<<" "<<endl;
	cout<<"请输入一个整数: ";
	cin>>Roll;
	cout<<endl; 
	srand(time(NULL));
	cout<<"随机生成: "<<rand()%Roll<<endl;
	cout<<" "<<endl; 
	system("pause");
	return 0;
}
