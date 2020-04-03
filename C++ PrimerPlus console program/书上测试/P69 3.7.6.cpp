#include<iostream>
int main(){
	using namespace std;
	double x, y, z;
	cout<<"输入所行公里数(千米 km): ";
	cin>>x;
	cout<<"输入所用油量(升 L): ";
	cin>>y; 
	z=y/x;
	cout<<"每100公里(km)的耗油量(L)为: "<<z*100<<endl;
	
	cin.get();
	return 0; 
}
