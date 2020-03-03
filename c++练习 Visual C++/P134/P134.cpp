#include "stdafx.h"
#include <iostream.h>
#include <stdio.h>
#include <string.h>

class Citem{
friend void outputitem(Citem * pitem);
private:
	char m_name[128];
	void outputname(){
		cout<<"\n"<<m_name<<"\n";
	}
public:
	void setitemname(const char* pch){
		if (pch!=NULL){
			strcpy(m_name,pch);
		}
		else{
			cout<<"Please input a value\n";
		}
	}
	Citem(){
		memset(m_name,0,128);   //初始化数据成员
	}
};

void outputitem(Citem * pitem){        //定义全局函数
	if (pitem!=NULL){
		pitem->setitemname("大国梦,中国梦\n");
		pitem->outputname();
	}
	else{
		cout<<"Please input a value.\n";
	}
}


int main(int argc, char* argv[])
{
	Citem item;
	outputitem(&item);
	return 0;
}
