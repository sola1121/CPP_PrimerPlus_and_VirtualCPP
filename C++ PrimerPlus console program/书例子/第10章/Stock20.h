#ifndef STOCK20_H_
#define STOCK20_H_
#include<string>

class Stock{
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot(){total_val=shares*share_val;}
public:
	Stock(){company="no name"; shares=0; share_val=0.0; total_val=0.0;}
	Stock(const std::string & co, long n, double pr);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
	const Stock & topval(const Stock & s) const;
};


#endif
