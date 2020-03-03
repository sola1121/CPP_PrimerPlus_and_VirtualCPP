#include<iostream>
#include<cstring>
struct patron{
	std::string Name;
	double Num;
};
int main(){
	using namespace std;
	cout<<"How many persons had donated: ";
	int i;
	cin>>i;
	patron * patrons = new patron[i];
	for (int a=0;a<i;a++){
		cout<<"Enter the name of patron: ";
		cin.get();
		getline(cin,patrons[a].Name);
		cout<<"Enter the number of money: ";
		cin>>patrons[a].Num;
	}
	
	cout<<"\nThe donation money greater than 10000$.\n";
	for (int a=0;a<i;a++){
		if (patrons[a].Name==""||patrons[a].Name==" ")
			patrons[a].Name="none";
		if (patrons[a].Num>10000.0)
			cout<<patrons[a].Name<<"    "<<patrons[a].Num<<endl;	
	}
	cout<<"\nAll patrons.\n";
	for (int a=0;a<i;a++)
		cout<<patrons[a].Name<<"    "<<patrons[a].Num<<endl;
	
	cout<<endl;
	system("pause");
	return 0;
}
