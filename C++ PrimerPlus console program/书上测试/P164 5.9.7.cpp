#include<iostream>
#include<string>
using namespace std;
struct car
{
	string producer;
	int year;
};
int main(){
	int a;
	cout<<"How many cars do youu wish to catalog? ";
	(cin>>a).get();
	struct car * info = new struct car[a];
	for (int i=1;i<=a;i++)
	{
		cout<<"#"<<i<<":"<<"\n";
		cout<<"Please enter the make: ";
		getline(cin,info[i-1].producer);
		cout<<"Please enter the year make: ";
		(cin>>info[i-1].year).get();
	}
	cout<<"\n"<<"Here is your collection: "<<"\n";
	for (int i=1;i<=a;i++)
	{
		cout<<info[i-1].year<<"   "<<info[i-1].producer<<"\n";
	}
	delete [] info;
	
	cin.get();
	return 0;
}
