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

//与上面的CUser类等价

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
在c++类定义中const char *getFistName() const; 语句中最后一个const有什么意义？

第一个const表明函数返回值如果不为空，那么其指向是不允许修改的。
第二个const这种用法常用在类的成员函数声明和实现中，表示这个类的实现中，不能修改类的数据成员。
   比如
   class Test
   {
    public:
        const char *getFistName() const;
   private:
        int num;
        char name[40];
    };
    
    类的实现：
    const char *Test::getFirstName() const
    {
         num = 4;
         strcpy(name, "hello");
         //这两处均修改了类的数据成员，由于有第二个const限制，编译将出现错误！！！！！！！！！！
         
         return name;
    }

这样的好处是，对于不需要修改类数据成员的函数，加以限制，可以避免许多误笔。

*/

class CUser4{
private:
	char m_username[128];
	char m_password[128];
public:
	CUser()                       //定义默认的构造函数
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
	}                             //定义默认的构造函数
	CUSer(const char* pusername,const char* ppassword)   //定义普通的构造函数
	{
		if (pusername !=NULL && ppassword != NULL){
			strcpy(m_username,"MR");
			strcpy(m_password,"KJ");
		}
	}
	char* getusername() const     //定义成员函数
	{
		return (char*) m_username;
	}
	char* getpassword() const     //定义成员函数
	{
		return (char*) m_password;
	}
};



int main(int argc, char* argv[])
{
	char * c="测试指针.";
	cout<<c<<endl;

	Cuser3 usefor;
	usefor.setusername("MR");
	usefor.setpassword("KJ");
	usefor.login();

	CUser4 user;                    //调用用户定义的默认构造函数
	cout<<user.getusername();  
	
	CUser5 user5;                   //调用默认构造函数
	cout<<user5.getpassword();
	CUSer5 user6("MR","KJ");        //调用非默认构造函数
	//指针型: CUser5 * puser5 = new CUser("MR","KJ");
	cout<<user6.getusername();


	cin.get();
	return 0;
}
