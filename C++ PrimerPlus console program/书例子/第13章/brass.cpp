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
            /*���*/
void Brass::Deposit(double amt){
	if (amt<0)  //����Ǵ����� 
		cout<<"Negative deposit not allowed; deposit is called.\n";
	else
		balance+=amt;  //�������amt 
}
            /*����Brass����,��֤amt��ֵ��ȷ,���Ҿ߱�����*/
void Brass::Withdraw(double amt){
	//set up ###.## format
	format initialState=setFormat();
	precis prec=cout.precision(2);
	
	if(amt<0)  //ȷ������ 
		cout<<"Withdrawal amount must be positive; withdrawal canceled.\n";
	else if (amt<=balance)   //amtС����� 
		balance-=amt;  //���ᱻ��ȥamt 
	else   //������� 
		cout<<"Withdrawal amount of $"<<amt<<" exceeds yor balance.\n"<<"Withdrawal canceled.\n";
		
	restore(initialState, prec);
}
       /*������������*/
double Brass::Balance()const{
	return balance;
}
            /*Brass ��ʾ�˻���Ϣ*/
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
		    :Brass(s,an,bal)   //��ʼ���б�,�Դ�����ʼ������˽������ 
{
	maxLoan=ml;
	owesBank=0.0;
	rate=r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
		    :Brass(ba)   //��ʼ���б�,�Դ�����ʼ������˽������ 
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

//redefine how Withdraw() works  BrassPlus�ĳ��ع��� 
void BrassPlus::Withdraw(double amt){
	//set ###.## format
	format initialState=setFormat();
	precis prec=cout.precision(2);
	
	double bal=Balance();   //����balance��ֵ 
	if (amt<=bal)
		Brass::Withdraw(amt);   //����amt��,���ʹ��Brass�ĳ��ع��� 
	else if (amt<=bal+maxLoan-owesBank){   //���+͸֧����-��ǰ͸֧�� 
		double advance =amt-bal;  //Ԥ��=amt-��� 
		owesBank+=advance*(1.0+rate);   //��ǰ͸֧��+=Ԥ��*���� 
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
