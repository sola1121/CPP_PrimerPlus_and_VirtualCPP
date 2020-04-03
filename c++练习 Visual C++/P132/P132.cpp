#include "stdafx.h"
#include <iostream.h>
#include <stdio.h>
#include <string.h>

class CItem{
private:
	char m_name[128];
	void outputname(){
		cout<<"/n"<<m_name;
	}
public:
	friend class CList;  //将CList类作为自己的友元类
	void setitemname(const char* pch){
		if (pch!=NULL){
			strcpy(m_name,pch);
		}
		else{
			cout<<"\nPlease input a value.";
		}
	}
	CItem(){
		memset(m_name,0,128);
	}
};

class CList{
private:
	CItem m_item;
public:
	void outputitem();
};

void CList::outputitem(){      //属于CList的方法
	m_item.setitemname("Beijing");   //调用CItem中的公有方法
	m_item.outputname();      //调用CItem中的私有方法
}


int main(int argc, char* argv[])
{
	CList outCItem;
	outCItem.outputitem();
	return 0;
}
