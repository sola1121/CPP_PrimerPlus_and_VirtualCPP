#include <iostream>
#include "acctabc.h"

using std::cout;
using std::ios_base;
using std::endl;
using std::string;

//Abstract Base Class
AcctABC::AcctABC(const string & s, long an, double bal){
	fullName=s;
	acctNum=an;
	balance=bal;
}

void AcctABC::Deposit(double amt){
	if (amt<0)
		cout<<"Negative deposit not allowed; deposit is cancelled.\n";
	else
		balance+=amt;
}

void AcctABC::Withdraw(double amt){
	balance-=amt;
}

//Protected methods for formatting
AcctABC::Formatting AcctABC::SetFormat() const{   //在AcctABC中定义的ForMatting结构,与使用其的SetFormat()函数 
	//set up ###.## format
	Formatting f;
	f.flag=cout.setf(ios_base::fixed, ios_base::floatfield);
	f.pr=cout.precision(2);
}

//Brass methods
void Brass::Withdraw(double amt){
	if (amt<0)
		cout<<"Withdrawal amount must be positve; withdrawal canceled.\n";
	else if (amt<=Balance())
		AcctABC::Withdraw(amt);
	else
		cout<<"Withdrawal amount of $"<<amt<<"exceeds your balance.\n"
			<<"Withdrawal canceled.\n";
}

void Brass::ViewAcct() const{
	Formatting f=SetFormat();
	cout<<"Brass Client: "<<FullName()<<endl;
	cout<<"Account Number: "<<AcctNum()<<endl;
	cout<<"Balance: $"<<Balance()<<endl;
	
	Restore(f);
}

//BrassPlus methods
BrassPlus::BrassPlus(const std::string & s, long an, double bal, double ml, double r)
			:AcctABC(s,an,bal)
{
	maxLoan=ml;
	owesBank=0.0;
	rate=r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
			:AcctABC(ba)
{
	maxLoan=ml;
	owesBank=0.0;
	rate=r;
}

void BrassPlus::ViewAcct() const{
	Formatting f=SetFormat();
	
	cout<<"BrassPlus Client: "<<FullName()<<endl;
	cout<<"Account Number: "<<AcctNum()<<endl;
	cout<<"Balance: $"<<Balance()<<endl;
	cout<<"Maximum loan: $"<<maxLoan<<endl;
	cout<<"Owed to bank: $"<<owesBank<<endl;
	cout.precision(3);
	cout<<"Loan Rate: "<<100*rate<<"%\n";
	Restore(f);
}

void BrassPlus::Withdraw(double amt){
	Formatting f=SetFormat();
	
	double bal=Balance();
	if (amt<=bal)
		AcctABC::Withdraw(amt);
	else if (amt<=bal+maxLoan-owesBank){
		double advance =amt-bal;  //预付=amt-余额 
		owesBank+=advance*(1.0+rate);   //当前透支额+=预付*利率 
		cout<<"Bank advance: $"<<advance<<endl;
		cout<<"Finance charge: $"<<advance*rate<<endl;
		Deposit(advance);
		AcctABC::Withdraw(amt);
	}
	else
		cout<<"Credit limit exceeded. Transaction cancelled.\n";
	Restore(f);
}

