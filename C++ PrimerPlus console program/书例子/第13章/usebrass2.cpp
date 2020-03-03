/* �鷽����ʾ,ʹ��ָ������ָ������� */
/* ʹ�õĹ��м̳�ģ��,����Brassָ��ȿ���ָ��Brass����,Ҳ����ָ��BrassPlus����.*/
/* ����ʹ��һ�������ʾ�������Ͷ���. ��̬�� */
#include <iostream>
#include <string>
#include "brass.h"

const int CLIENTS=4;

int main(int argc, char** argv) {
	using std::cin;
	using std::cout;
	using std::endl;
	
	Brass * P_clients[CLIENTS];   //�����ָ�� 
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
		
		//��������ѡ��Brass����BrassPlus 
		while(cin>>kind && (kind!='1'&&kind!='2'))
			cout<"Enter either 1 or 2: ";
			
		if (kind=='1')
			P_clients[i]=new Brass(temp, tempnum, tempbal);
		else{
			double tmax, trate;
			cout<<"Enter the overdraft limit: $";
			cin>>tmax;  //���͸֧�� 
			cout<<"Enter the interest rate as a decimal fraction: ";
			cin>>trate;   //���� 
			P_clients[i]=new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get()!='\n')
			continue;
	} 
	
	cout<<endl;
	
	for (int i=0; i<CLIENTS; i++){
		P_clients[i]->ViewAcct();          /* ��̬�Ե��ṩ��,��ѡ���Ӧ���۷�������ִ�е� */
		cout<<endl;
	} 
	
	for (int i=0; i<CLIENTS; i++){
		delete P_clients[i];
	}
	cout<<"Done.\n";
	
	system("pause");
	return 0;
}
