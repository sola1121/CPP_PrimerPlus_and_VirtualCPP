#include "stdafx.h"
#include <iostream.h>
#include <string.h>
#include <stdio.h>

const int maxlen=128;

class Cemployee{
public:
	int m_id;
	char m_name[maxlen];
	char m_depart[maxlen];
	Cemployee(){
		memset(m_name,0,maxlen);
		memset(m_depart,0,maxlen);
		cout<<"Ա���๹�캯��������.";
	}
	void outputname(){
		cout<<"Ա������: \n"<<m_name;
	}
};

class Coperator: public Cemployee{
public:
	char m_password[maxlen];
	bool Login(){
		if (strcmp(m_name,"MR")==0 && strcmp(m_password,"KJ")==0){
			cout<<"��½�ɹ�!\n";
			return 1;
		}
		else{
			cout<<"��¼ʧ��!\n";
			return 0;
		}
	}
};

int main(int argc, char* argv[])
{
	return 0;
}
