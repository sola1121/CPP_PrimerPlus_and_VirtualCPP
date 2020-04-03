#include<iostream>
#include<array>
const int SZ = 100;
int main(){
	using namespace std;
	array<long double,SZ>factorials;
	factorials[1] = factorials[0] = (long double)1;
	for (int i=2;i<=SZ;i++)
	factorials[i] = i * factorials[i-1];
	for (int i=0;i<=SZ;i++)
	cout<<i<<" != "<<factorials[i]<<"\n";
	
	cin.get();
	return 0; 
}
