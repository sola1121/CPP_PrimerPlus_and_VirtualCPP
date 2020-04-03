#ifndef BRASS_H_
#define BRASS_H_

#include <string>

class Brass{
private:
	std::string fullName;
	long acctNum;    //账号 
	double balance;   //余额 
public:
	Brass(const std::string & s="Nullbody", long an=-1, double bal=0.0); 
	void Deposit(double amt);   //存款 
	double Balance() const;   //余额 
	
	virtual void ViewAcct() const;   //显示账户信息 
	virtual void Withdraw(double amt);  //撤回 
	virtual ~Brass(){}
};

class BrassPlus:public Brass{  //is-a式继承Brass
private:
	double maxLoan;   //透支上限 
	double rate;   //透支贷款利率 
	double owesBank;   //当前透支总额 
public: 
	BrassPlus(const std::string & s="Nullbody",
			long an=-1,
			double bal=0.0,
			double ml=500,  //透支上限 
			double r=0.11125);  //透支贷款利率 
	BrassPlus(const Brass & ba, double ml=500, double r=0.11125);
	
	virtual void ViewAcct() const;   //显示账户信息 
	virtual void Withdraw(double amt);   //撤回
	 
	void ResetMax(double m) { maxLoan=m;}
	void ResetRate(double r) { rate=r;}
	void ResetOwes() { owesBank=0;}
};

#endif

/* 
	virtual void ViewAcct() const;  
	virtual void Withdraw(double amt);
	因为都是虚方法,所以在之后定义指针时,可以通过动态联编通过判断指针指向对象的类型选择使用 
*/
