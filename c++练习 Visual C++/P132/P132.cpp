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
	friend class CList;  //��CList����Ϊ�Լ�����Ԫ��
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

void CList::outputitem(){      //����CList�ķ���
	m_item.setitemname("Beijing");   //����CItem�еĹ��з���
	m_item.outputname();      //����CItem�е�˽�з���
}


int main(int argc, char* argv[])
{
	CList outCItem;
	outCItem.outputitem();
	return 0;
}
