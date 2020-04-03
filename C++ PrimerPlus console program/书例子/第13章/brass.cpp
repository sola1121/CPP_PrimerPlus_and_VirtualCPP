#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFormat();
void restore(format f, precis p);

//Brass methods

Brass::Brass(const std::string & s, long an, double bal){
	fullName=s;
	acctNum=an;
	balance=bal;
}
            /*存款*/
void Brass::Deposit(double amt){
	if (amt<0)  //这就是存款不足了 
		cout<<"Negative deposit not allowed; deposit is called.\n";
	else
		balance+=amt;  //余额将会加上amt 
}
            /*基类Brass撤回,保证amt的值正确,并且具备条件*/
void Brass::Withdraw(double amt){
	//set up ###.## format
	format initialState=setFormat();
	precis prec=cout.precision(2);
	
	if(amt<0)  //确保正数 
		cout<<"Withdrawal amount must be positive; withdrawal canceled.\n";
	else if (amt<=balance)   //amt小于余额 
		balance-=amt;  //余额将会被减去amt 
	else   //超过余额 
		cout<<"Withdrawal amount of $"<<amt<<" exceeds yor balance.\n"<<"Withdrawal canceled.\n";
		
	restore(initialState, prec);
}
       /*用来设置余额的*/
double Brass::Balance()const{
	return balance;
}
            /*Brass 显示账户信息*/
void Brass::ViewAcct() const{
	//set up ###.## format
	format initialState=setFormat();
	precis prec=cout.precision(2);
	
	cout<<"Client:"<<fullName<<endl;
	cout<<"Account Number: "<<acctNum<<endl;
	cout<<"Balance: $"<<balance<<endl;
	
	restore(initialState, prec);
}

//BrassPlus methods

BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r)
		    :Brass(s,an,bal)   //初始化列表,以此来初始化基类私有数据 
{
	maxLoan=ml;
	owesBank=0.0;
	rate=r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
		    :Brass(ba)   //初始化列表,以此来初始化基类私有数据 
{
	maxLoan=ml;
	owesBank=0.0;
	rate=r;
}

//redefine how ViewAcct() works
void BrassPlus::ViewAcct() const{
	//set up ###.## format
	format initialState=setFormat();
	precis prec=cout.precision(2);
	
	Brass::ViewAcct();  //display base portion
	cout<<"Masimum Loan: $"<<maxLoan<<endl;
	cout<<"Owed to bank: $"<<owesBank<<endl;
	cout.precision(3);  //format ###.###
	cout<<"Loan rate: "<<100*rate<<"%\n";
	
	restore(initialState, prec);	
}

//redefine how Withdraw() works  BrassPlus的撤回功能 
void BrassPlus::Withdraw(double amt){
	//set ###.## format
	format initialState=setFormat();
	precis prec=cout.precision(2);
	
	double bal=Balance();   //返回balance的值 
	if (amt<=bal)
		Brass::Withdraw(amt);   //余额比amt多,则会使用Brass的撤回功能 
	else if (amt<=bal+maxLoan-owesBank){   //余额+透支上限-当前透支额 
		double advance =amt-bal;  //预付=amt-余额 
		owesBank+=advance*(1.0+rate);   //当前透支额+=预付*利率 
		cout<<"Bank advance: $"<<advance<<endl;
		cout<<"Finance charge: $"<<advance*rate<<endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}	
	else
		cout<<"Credit limit exceeded. Transaction cancelled.\n";
		
	restore(initialState, prec);
}

format setFormat(){
	//set up ###.## format
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p){
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}
