#include<iostream>
int main(){
	using namespace std;
	int ch [3]{1,2,3};
	cout<<"ch[0] is "<<ch[0]<<endl;
	ch[0]=ch[0]+1;
	cout<<"ch[1] is "<<ch[1]<<endl;
	cout<<"ch[0] is "<<ch[0]<<endl;
	
	return 0;
}
