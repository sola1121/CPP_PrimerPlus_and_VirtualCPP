#include <iostream>
#include <cstring>

using namespace std;

const int SIZE=5;

void display(const string * sa, int n);

int main(){
	string list[SIZE];   //һ����SIZE��Ԫ�ص�string���� 
	cout<<"Enter your "<<SIZE<<" favorite astronomical sights: \n";
	for (int i=0; i<SIZE; i++){
		cout<<i+1<<": ";
		getline(cin,*(list+i));   //string����ʹ�� getline(cin,string��������) 
	}
	
	cout<<"Your list: \n";
	display(list, SIZE);
	
	system("pause");
	return 0; 
} 

void display(const string sa[], int n){       //sa[]==*(sa+i)  ��ֻ���ں����β�����ʱ�ų�����. 
	for (int i=0; i<n; i++)
		cout<<i+1<<": "<<*(sa+i)<<endl;
}
