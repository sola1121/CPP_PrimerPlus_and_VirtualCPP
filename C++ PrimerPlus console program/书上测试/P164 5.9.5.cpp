#include<iostream>
#include<string>
int main(){
	using namespace std;
	string name = "Sales of C++ For Fools";
	cout<<name<<endl;
    char * monthname[12] = {"January","February","March","April","May","June", "July","August", "September","October","November","December"};
	int month[12] = {47,98,63,24,61,8,69,50,15,35,20,43};
	for (int i=1;i<=12;i++)
	{
		cout<<monthname[i-1]<<" marketing quantities: "<<month[i-1]<<"\n";
	} 
	
	cin.get();
	return 0;
}
