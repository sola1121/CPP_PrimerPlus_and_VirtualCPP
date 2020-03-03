#include<iostream>
#include<cmath>
int main(){
	using namespace std;
	int x;
	double r;
	for (x=-20;x<=20;x++)
	{
		r=(x-6)*(x-5)*(x-7)-4*(x-5)-4*(x-7);
		if (0==r)
		cout<<x<<"\n";
	}
	
	cin.get();
	return 0;
}
