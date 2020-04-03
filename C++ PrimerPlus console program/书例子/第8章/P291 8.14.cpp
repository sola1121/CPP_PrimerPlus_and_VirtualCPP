#include <iostream>
using namespace std;

template <typename T> void show_array(T arr[], int n);
template <typename T> void show_array(T *arr[], int n);

struct debts{
	char name[50];
	double amount;
};

int main(){
	int things[6]={13,31,403,301,310,130};
	debts mr_E[3]={
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby Stone",1000.0},
	};                                     //��������ʼ���ṹ���� 
	double * pd[3];    //��������Ԫ�ص�doubleָ�� 
	
	for (int i=0; i<3; i++)
		pd[i]=&mr_E[i].amount;     //��ֵ��ַ  �����鷳��д����Ϊ�˵���B���� 
	
	cout<<"Listening Mr. E's count of things:\n";
	show_array(things,6);
	cout<<"Listening Mr E's debts:\n";
	show_array(pd,3);
	
	system("pause");
	return 0;
}

template <typename T> void show_array(T arr[], int n){
	cout<<"template A:\n";
	for (int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

template <typename T> void show_array(T *arr[], int n){
	cout<<"template B:\n";
	for (int i=0; i<n; i++)
		cout<<*arr[i]<<" ";
	cout<<endl;
}
