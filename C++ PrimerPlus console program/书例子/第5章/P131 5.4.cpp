#include<iostream>
int main(){
	using namespace std;
	long long factorials[16];
	factorials[1] = factorials[0] = 1LL;
	for (int i=2;i<16;i++)
		factorials[i] = i * factorials[i-1];
	for (int i=0;i<16;i++)
		cout<<i<<"! = "<<factorials[i]<<endl;
	
	cin.get();	
	return 0;
}
