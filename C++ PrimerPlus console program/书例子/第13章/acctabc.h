#ifndef ACCTAB_H_
#define ACCTAB_H_

#include <iostream>
#include <string>

//Abstract Base Class 抽象基类 
class AcctABC{
private:
	std::string fullName;
	long acctNum;
	double balance;
	
protected:
	//设置cout格式 
	struct Formatting{
		std::ios_base::fmtflags flag;
		std::streamsize pr;
	};
	Formatting SetFormat() const;
	void Restore (Formatting & f) const;
	
	/* 只读访问fullName 与 acctNum */ 
	const std::string & FullName() const { return fullName; }
	long AcctNum() const { return acctNum; }
	
public:
	AcctABC(const std::string & s="Nullbody", long an=-1, double bal=0.0);
	void Deposit(double amt);
	double Balance() const { return balance; }
	
	virtual void Withdraw(double amt) =0;   //纯虚函数 
	virtual void ViewAcct() const =0;   //纯虚函数 
	virtual ~AcctABC(){}
};

//Brass Account Class  继承抽象 
class Brass:public AcctABC{
public:
	Brass(const std::string & s="Nullbody", long an=-1, double bal=0.0)
			:AcctABC(s,an,bal){}
	
	//重定义方法		
	virtual void Withdraw(double amt);
	virtual void ViewAcct() const;
	virtual ~Brass(){}
};

//BrassPlus Account Class  继承抽象并添加新数据 
class BrassPlus:public AcctABC{
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const std::string & s="Nullbody", long an=-1, double bal=0.0, double ml=500, double r=0.10);
	BrassPlus(const Brass & ba, double ml=500, double r=0.10);
	
	virtual void Withdraw(double amt);
	virtual void ViewAcct() const;
	
	void ResetMax(double m){ maxLoan=m; }
	void ResetRate(double r){ rate=r; }
	void ResetOwes(){ owesBank=0; }
};

#endif
