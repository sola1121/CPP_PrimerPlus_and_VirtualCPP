#include <iostream>

int max(int a, int b){
	
	return a>b?a:b;
}

int main(){
	using namespace std;
	
	int m,n;
	cin>>m>>n;
	cout<<"\n";
	cout<<max(m,n)<<endl;
	
	cin.get();
	return 0;
	
}
