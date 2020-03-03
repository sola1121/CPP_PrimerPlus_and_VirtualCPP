#include "stdafx.h"
#include <iostream.h>
#include <stdio.h>
#include <string.h>

class Citem;

class Clist{
private:
	Citem * m_pitem;
public:
	Clist();    //����Ĭ�Ϲ��캯��
	~Clist();    //����Ĭ����������
	void outputitem();
};

class Citem{
	friend void Clist::outputitem();
private:
	char m_name[128];
	void outputname(){
		cout<<"\n"<<m_name<<"\n";
	}
public:
	void setitemname(const char* pch){
		if (pch != NULL){
			strcpy(m_name,pch);
		}
		else{
			cout<<"Please input a value\n";
		}
	}
	Citem(){                       //���캯��
		memset(m_name,0,128);
	}
};

void Clist::outputitem(){
	m_pitem->setitemname("Beijing");
	m_pitem->outputname();
}

Clist::Clist(){
	m_pitem=new Citem();    //����m_pitem����
}

Clist::~Clist(){
	delete m_pitem;
	m_pitem=NULL;
}

int main(int argc, char* argv[])
{
	Clist list;
	list.outputitem();
	return 0;
}
