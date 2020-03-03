#include <iostream>
#include "Stock20.h"

Stock::Stock(const std::string & co, long n, double pr){
	company=co;
	
	if (n<0){
		std::cout<<"Number of shares can't be negative; "<<company<<" shares set to 0.\n";
		shares=0;
	}
	else
		shares=n;
	share_val=pr;
	set_tot();
}

Stock::~Stock(){
}

void Stock::buy(long num, double price){
	if (num<0){
		std::cout<<"Number of shares purchased can't be negative. Transaction is aborted.\n";
	}
	else{
		shares+=num;
		share_val=price;
		set_tot();
	}
}

void Stock::sell(long num, double price){
	if (num<0){
		std::cout<<"Number of shares sold can't be negative. Transaction is aborted.\n";
	}
	else if (num>shares){
		std::cout<<"You can't sell more than you have! Transaction is aborted.\n";
	}
	else {
		shares-=num;
		share_val=price;
		set_tot();
	}
}

void Stock::update(double price){
	share_val=price;
	set_tot();
}

void Stock::show(){
	using std::cout;
	using std::ios_base;
	
	ios_base::fmtflags orig=cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec=cout.precision(3);
	
	cout<<"Coampany: "<<company<<", shares: "<<shares<<'\n';
	cout<<" Shares Price: $"<<share_val;
	
	cout.precision(2);
	cout<<"  Total worth: $"<<total_val<<'\n';
	
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}

const Stock & Stock::topval(const Stock & s) const{
	if (s.total_val>total_val){
		return s;
	}
	else{
		return *this;
	}
}
