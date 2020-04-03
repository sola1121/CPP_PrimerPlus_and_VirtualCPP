#include<iostream>
int main(){
	using namespace std;
	double * p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout<<"p3[1] is "<<p3[1]<<".\n";
	p3=p3+1;
	cout<<"Now p3[0] is "<<p3[0]<<endl;
	cout<<"Now p3[1] is "<<p3[1]<<endl;
	
	p3[0]=p3[0]-0.1;
	cout<<"Here p3[0]-0.1 then "<<p3[2]<<endl;
	p3=p3-1;
	delete [] p3;
	
	cin.get();
	return 0;
}
