#include <iostream>
#include <cstring>
#include "workermi.h"

const int SIZE=5;

int main(){
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;
	
	Worker * lolas[SIZE];   //基类指针 
	
	int ct;
	for(ct=0; ct<SIZE; ct++){
		char choice;
		cout<<"Enter the Employee category:\n"
			<<"w: waiter s: singer t: singer waiter q: quit\n";
			
		cin>>choice;
		//choice 有输入值 
		while(strchr("wstq", choice)==NULL){    //返回输入字符首次出现数位 
			cout<<"Please enter a w, s, t, or q: ";
			cin>>choice;
		}
		
		if (choice=='q')   //选q退出 
			break;
			
		switch(choice){   //动态为lolas分配内存,类型也是选择输入的 
			case 'w': lolas[ct]=new Waiter;
					  break;
			case 's': lolas[ct]=new Singer;
					  break;
			case 't': lolas[ct]=new SingingWaiter;
					  break;
		}
		cin.get();
		lolas[ct]->set();   //向下强制转换 
	}
	
	//输出结果 
	cout<<"\nHere is your staff:\n";
	int i;
	for (i=0; i<ct; i++){
		cout<<endl;
		lolas[i]->show();   //向下强制转换 
	}
	
	for (i=0; i<ct; i++)   //delete 
		delete lolas[i];
		
	cout<<"Bye~\n";
	
	system("pause");
	return 0;
}
