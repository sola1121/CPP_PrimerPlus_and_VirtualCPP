#include<iostream>
int main(){
	using namespace std;
	double L, USr;
	cout<<"每100km消耗的汽油量(L): ";
	cin>>L;
	
	USr=100/(3.875*62.14*L);
	
	cout<<endl<<"每加仑: "<<USr<<" mile(s)";
	
	cin.get();
	return 0;  
}
