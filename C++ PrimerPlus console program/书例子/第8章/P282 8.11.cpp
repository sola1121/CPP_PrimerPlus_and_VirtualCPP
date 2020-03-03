#include<iostream>

template<typename T>
void swap(T & a, T & b);

int main(){
	using namespace std;
	
	int i=10, j=20;
	cout<<"i, j = "<<i<<", "<<j<<".\n";
	cout<<"Using compiler-generated int swapper:\n";
	swap(i,j);
	cout<<"Now i, j = "<<i<<", "<<j<<".\n";
	
	double x=24.5, y=81.7;
	cout<<"Using compiler-gennerated int swapper:\n";
	swap(x,y);
	cout<<"Now x, y = "<<x<<", "<<y<<".\n";
	
	cin.get();
	return 0;
} 

template <template T>
void swap(T & a, T & b){
	T temp;
	temp=a;
	a=b;
	b=temp;
}
