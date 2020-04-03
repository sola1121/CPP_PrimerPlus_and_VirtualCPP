/* 虚方法演示,使用指针数组指向类对象 */
/* 使用的公有继承模型,所以Brass指针既可以指向Brass对象,也可以指向BrassPlus对象.*/
/* 可以使用一个数组表示多种类型对象. 多态性 */
#include <iostream>
#include <string>
#include "brass.h"

const int CLIENTS=4;

int main(int argc, char** argv) {
	using std::cin;
	using std::cout;
	using std::endl;
	
	Brass * P_clients[CLIENTS];   //基类的指针 
	std::string temp;
	long tempnum;
	double tempbal;
	char kind;
	
	for (int i=0; i<CLIENTS; i++){
		cout<<"Enter client's name: ";
		getline(cin, temp);
		cout<<"Enter client's account number: ";
		cin>>tempnum;
		cout<<"Enter opening balance: $";
		cin>>tempbal;
		cout<<"Enter 1 for Brass Account or 2 for BrassPlus Account: ";
		
		//输入数字选择Brass还是BrassPlus 
		while(cin>>kind && (kind!='1'&&kind!='2'))
			cout<"Enter either 1 or 2: ";
			
		if (kind=='1')
			P_clients[i]=new Brass(temp, tempnum, tempbal);
		else{
			double tmax, trate;
			cout<<"Enter the overdraft limit: $";
			cin>>tmax;  //最高透支额 
			cout<<"Enter the interest rate as a decimal fraction: ";
			cin>>trate;   //利率 
			P_clients[i]=new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get()!='\n')
			continue;
	} 
	
	cout<<endl;
	
	for (int i=0; i<CLIENTS; i++){
		P_clients[i]->ViewAcct();          /* 多态性的提供者,会选择对应的累方法进行执行的 */
		cout<<endl;
	} 
	
	for (int i=0; i<CLIENTS; i++){
		delete P_clients[i];
	}
	cout<<"Done.\n";
	
	system("pause");
	return 0;
}
