#include "stdafx.h"
#include <iostream.h>


class CBook{
public:
	int n_price;
	static unsigned int m_price;
	static void OutputInfo(){
		
		cout<<m_price;
	}
};

int n_price=30;
unsigned int m_price=10;

int main(int argc, char* argv[])
{
	CBook;
	cout<<m_price<<endl;
	m_price=20;
	cout<<m_price<<endl;
	void OutputInfo();

	return 0;
}
