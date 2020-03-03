#include <iostream>
#include "dma.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using std::endl;
	using std::cout;
	
	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	
	cout<<"Displaying baseDMA object:\n";
	cout<<shirt<<endl;
	
	cout<<"Displaying lacksDMA object:\n";
	cout<<balloon<<endl;
	
	cout<<"Displaying hasDMA object:\n";
	cout<<map<<endl;
	
	lacksDMA balloon2(balloon);
	cout<<"Result of lacksDMA copy:\n";
	cout<<balloon2<<endl;
	
	hasDMA map2;
	map2=map;
	cout<<"Result of hasDMA assignment:\n";
	cout<<map2;
	
	system("pause");	
	return 0;
}
