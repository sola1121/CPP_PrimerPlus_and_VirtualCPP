#include <iostream>
#include "P356Stock10.4.h"

int main(int argc, char** argv) {
{	
	using std::cout;
	cout<<"Using constructor to create new object\n";
	Stock stock1("NanoSmart",12,20.0);
	stock1.show();
	Stock stock2=Stock("Boffo Object",2,2.0);
	stock2.show();
	
	cout<<"Assigning stock1 to stock2:\n";
	stock2=stock1;
	cout<<"Listing stock1 to stock2:\n";
	stock1.show();
	stock2.show();
	
	cout<<"Using a constructor to reset an object\n";
	stock1=Stock("Nifty Foods",10,50.0);
	stock1.show();
	cout<<"Done.\n";
	
	system("pause");
	return 0;
	}
}
