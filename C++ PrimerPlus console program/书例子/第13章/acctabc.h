#ifndef ACCTAB_H_
#define ACCTAB_H_

#include <iostream>
#include <string>

//Abstract Base Class ������� 
class AcctABC{
private:
	std::string fullName;
	long acctNum;
	double balance;
	
protected:
	//����cout��ʽ 
	struct Formatting{
		std::ios_base::fmtflags flag;
		std::streamsize pr;
	};
	Formatting SetFormat() const;
	void Restore (Formatting & f) const;
	
	/* ֻ������fullName �� acctNum */ 
	const std::string & FullName() const { return fullName; }
	long AcctNum() const { return acctNum; }
	
public:
	AcctABC(const std::string & s="Nullbody", long an=-1, double bal=0.0);
	void Deposit(double amt);
	double Balance() const { return balance; }
	
	virtual void Withdraw(double amt) =0;   //���麯�� 
	virtual void ViewAcct() const =0;   //���麯�� 
	virtual ~AcctABC(){}
};

//Brass Account Class  �̳г��� 
class Brass:public AcctABC{
public:
	Brass(const std::string & s="Nullbody", long an=-1, double bal=0.0)
			:AcctABC(s,an,bal){}
	
	//�ض��巽��		
	virtual void Withdraw(double amt);
	virtual void ViewAcct() const;
	virtual ~Brass(){}
};

//BrassPlus Account Class  �̳г������������ 
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
