#include <iostream>
#include <cstring>
#include "workermi.h"

const int SIZE=5;

int main(){
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;
	
	Worker * lolas[SIZE];   //����ָ�� 
	
	int ct;
	for(ct=0; ct<SIZE; ct++){
		char choice;
		cout<<"Enter the Employee category:\n"
			<<"w: waiter s: singer t: singer waiter q: quit\n";
			
		cin>>choice;
		//choice ������ֵ 
		while(strchr("wstq", choice)==NULL){    //���������ַ��״γ�����λ 
			cout<<"Please enter a w, s, t, or q: ";
			cin>>choice;
		}
		
		if (choice=='q')   //ѡq�˳� 
			break;
			
		switch(choice){   //��̬Ϊlolas�����ڴ�,����Ҳ��ѡ������� 
			case 'w': lolas[ct]=new Waiter;
					  break;
			case 's': lolas[ct]=new Singer;
					  break;
			case 't': lolas[ct]=new SingingWaiter;
					  break;
		}
		cin.get();
		lolas[ct]->set();   //����ǿ��ת�� 
	}
	
	//������ 
	cout<<"\nHere is your staff:\n";
	int i;
	for (i=0; i<ct; i++){
		cout<<endl;
		lolas[i]->show();   //����ǿ��ת�� 
	}
	
	for (i=0; i<ct; i++)   //delete 
		delete lolas[i];
		
	cout<<"Bye~\n";
	
	system("pause");
	return 0;
}
