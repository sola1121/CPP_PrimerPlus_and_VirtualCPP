#include <iostream>
#include "worker0.h"

const int LIM=4;

int main(){
	Waiter bob("Bob Apple", 314L, 5);
	Singer bev("Beverly Hills", 522L, 3);
	Waiter w_temp;
	Singer s_temp;
	
	Worker * pw[LIM]={&bob, &bev, &w_temp, &s_temp};   //基类指针,可以向下强制转换自动选择指向的派生类 
	
	int i;
	for (i=2; i<LIM; i++)
		pw[i]->set();   //设置两个temp 
	
	for (i=0; i<LIM; i++){
		pw[i]->show();
		std::cout<<std::endl;
	}
	
	system("pause");
	return 0;
}
