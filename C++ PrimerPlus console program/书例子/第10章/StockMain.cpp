#include <iostream>
#include "StockHead.h"

int main(int argc, char** argv) {
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("NanoSmart",20,12.5);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15,18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400,200.0);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(300000,0.125);
	fluffy_the_cat.show();
	
	system("pause");
	return 0;
}
