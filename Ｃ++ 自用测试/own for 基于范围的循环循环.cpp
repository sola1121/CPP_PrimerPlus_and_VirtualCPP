#include<iostream>
int main(){
	double prices[5] = {4.99,2.33,5.6,68.5,463.6};
	for (double x : prices)
		std::cout<<x<<std::endl;
		
	return 0;
}
