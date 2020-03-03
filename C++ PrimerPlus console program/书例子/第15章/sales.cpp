#include "sales.h"

using std::string;

Sales::bad_index::bad_index(int ix, const string & s): std::logic_error(s), bi(ix){}

Sales::Sales(int yy){   //��ʼ��year, ��gross����Ϊ0 
	year=yy;
	for (int i=0; i<Months; ++i)
		gross[i]=0;
}

Sales::Sales(int yy, const double * gr, int n){
	year=yy;
	int lim=(n<Months)? n:Months;
	int i;
	for (i=0; i<lim; ++i)
		gross[i]=gr[i];
	for (; i<Months; ++i)   //for i>n and i<Months
		gross[i]=0;
} 

double Sales::operator [](int i) const{
	if (i<0 || i>=Months)
		throw bad_index(i);
	return gross[i];
}

LabeledSales::nbad_index::nbad_index(const string & lb, int ix, const string & s)
									: Sales::bad_index(ix, s)
{
	lbl=lb;
}

LabeledSales::LabeledSales(const string & lb, int yy)
						: Sales(yy)
{
	label=lb;	
}

LabeledSales::LabeledSales(const string & lb, int yy, const double * gr, int n)
						: Sales(yy, gr, n)
{
	label=lb;
}

double LabeledSales::operator[](int i) const{
	if (i<0 || i>=Months)
		throw nbad_index(Label(), i);
	return Sales::operator[](i);
}
