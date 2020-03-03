#include<iostream>
#include<ctime>
int main(){
	using namespace std;
	clock_t a = 1 * CLOCKS_PER_SEC;
	a+=1*CLOCKS_PER_SEC;
	clock_t b = clock();
	cout<<a<<"   "<<b;
	
	return 0;
}
