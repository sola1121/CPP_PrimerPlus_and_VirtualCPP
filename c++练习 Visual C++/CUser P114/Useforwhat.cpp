#include "stdafx.h"
#include <iostream.h>
#include <string.h>
#include <stdio.h>


class CUser{
	char m_username[128];
	char m_password[128];
	bool login(){
		if (strcmp(m_username, "MR")==0 && strcmp(m_password, "KJ")==0){
			cout<<"success\n";
			return true;
		}
		else{
			cout<<"fail\n";
			return false;
		}

	}
};

//�������CUser��ȼ�

class CUser2{
	char m_username[128];
	char m_password[128];
	bool login();
};
bool CUser2::login(){
	if (strcmp(m_username, "MR")==0 && strcmp(m_password, "KJ")==0){
		cout<<"success\n";
		return true;
	}
	else{
		cout<<"fail\n";
		return false;
	}	
}

class Cuser3{
private:
	char m_username[128];
	char m_password[128];
public:
	void setusername(const char * pusername){
		if (pusername != NULL)
			strcpy(m_username,pusername);
	}
	char* getusername()const{
		return (char*) m_username;
	}
	void setpassword(const char * ppassword){
		if (ppassword != NULL)
			strcpy(m_password,ppassword);
	}
	char * getpassword()const{
		return (char*) m_password;
	}
	bool login(){
		if (strcmp(m_username,"MR")==0 && strcmp(m_password,"KJ")==0){
			cout<<"success\n";
			return true;
		}
		else{
			cout<<"fail\n";
			return false;
		}
	}
};



/*
��c++�ඨ����const char *getFistName() const; ��������һ��const��ʲô���壿

��һ��const������������ֵ�����Ϊ�գ���ô��ָ���ǲ������޸ĵġ�
�ڶ���const�����÷���������ĳ�Ա����������ʵ���У���ʾ������ʵ���У������޸�������ݳ�Ա��
   ����
   class Test
   {
    public:
        const char *getFistName() const;
   private:
        int num;
        char name[40];
    };
    
    ���ʵ�֣�
    const char *Test::getFirstName() const
    {
         num = 4;
         strcpy(name, "hello");
         //���������޸���������ݳ�Ա�������еڶ���const���ƣ����뽫���ִ��󣡣�����������������
         
         return name;
    }

�����ĺô��ǣ����ڲ���Ҫ�޸������ݳ�Ա�ĺ������������ƣ����Ա��������ʡ�

*/

class CUser4{
private:
	char m_username[128];
	char m_password[128];
public:
	CUser()                       //����Ĭ�ϵĹ��캯��
	{
		strcpy(m_username,"MR");
		strcpy(m_password,"KJ");
	}
	char* getusername() const
	{
		return (char*) m_username;
	}
	char* getpassword() const
	{
		return (char*) m_password;
	}
};

class CUser5{
private:
	char m_username[128];
	char m_password[128];
public:
	CUser(){
		strcpy(m_username,"MR");
		strcpy(m_password,"KJ");
	}                             //����Ĭ�ϵĹ��캯��
	CUSer(const char* pusername,const char* ppassword)   //������ͨ�Ĺ��캯��
	{
		if (pusername !=NULL && ppassword != NULL){
			strcpy(m_username,"MR");
			strcpy(m_password,"KJ");
		}
	}
	char* getusername() const     //�����Ա����
	{
		return (char*) m_username;
	}
	char* getpassword() const     //�����Ա����
	{
		return (char*) m_password;
	}
};



int main(int argc, char* argv[])
{
	char * c="����ָ��.";
	cout<<c<<endl;

	Cuser3 usefor;
	usefor.setusername("MR");
	usefor.setpassword("KJ");
	usefor.login();

	CUser4 user;                    //�����û������Ĭ�Ϲ��캯��
	cout<<user.getusername();  
	
	CUser5 user5;                   //����Ĭ�Ϲ��캯��
	cout<<user5.getpassword();
	CUSer5 user6("MR","KJ");        //���÷�Ĭ�Ϲ��캯��
	//ָ����: CUser5 * puser5 = new CUser("MR","KJ");
	cout<<user6.getusername();


	cin.get();
	return 0;
}
