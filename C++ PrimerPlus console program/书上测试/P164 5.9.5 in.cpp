#include<iostream>
#include<string>
int main(){
	using namespace std;
	string name = "Sales of C++ For Fools";
	cout<<name<<endl;
	cout<<"\nPlease input the quantities of saled ¡ý"<<endl;
    char * monthname[12] = {"January","February","March","April","May","June", "July","August", "September","October","November","December"};
	int monthin[12];
	for (int i=1;i<=12;i++)
	{
		cout<<monthname[i-1]<<" marketing quantities: "<<"\n";
		cin>>monthin[i-1]; 
	} 
	
	cin.get();
	return 0;
}
