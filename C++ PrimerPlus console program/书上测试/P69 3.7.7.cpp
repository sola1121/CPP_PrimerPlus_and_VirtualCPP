#include<iostream>
int main(){
	using namespace std;
	double L, USr;
	cout<<"ÿ100km���ĵ�������(L): ";
	cin>>L;
	
	USr=100/(3.875*62.14*L);
	
	cout<<endl<<"ÿ����: "<<USr<<" mile(s)";
	
	cin.get();
	return 0;  
}
