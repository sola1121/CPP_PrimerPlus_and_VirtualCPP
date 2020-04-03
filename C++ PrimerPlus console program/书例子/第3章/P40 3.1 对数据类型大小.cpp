#include<iostream>
#include<climits>
int main(){
	using namespace std;
	short n_short=SHRT_MAX;
	int n_int =INT_MAX;
	long n_long=LONG_MAX;
	long long n_llong=LLONG_MAX;
	
	cout<<"short is "<<sizeof n_short<<" bytes."<<endl;
	cout<<"int is "<<sizeof(int)<<" bytes."<<endl;
	cout<<"long is "<<sizeof(long)<<" bytes."<<endl;
	cout<<"long long is "<<sizeof(long long)<<" bytes."<<endl;
	cout<<endl;
	
	cout<<"Maximun values:"<<endl;
	cout<<"short: "<<n_short<<endl;
	cout<<"int: "<<n_int<<endl;
	cout<<"long: "<<n_long<<endl;
	cout<<"long long: "<<n_llong<<endl<<endl;
	
	cout<<"Minimun int value = "<<INT_MIN<<endl;
	cout<<"Bits per byte = "<<CHAR_BIT<<endl;
	cout<<endl;
	
	cout<<"char is "<<CHAR_BIT<<" bytes."<<endl;
	cout<<"Max and Min number of char is "<<CHAR_MAX<<" and "<<CHAR_MIN<<" ."<<endl;
	
	cin.get();
	return 0;
}

