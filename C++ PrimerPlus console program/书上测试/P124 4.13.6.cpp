#include<iostream>
struct CandyBar
{
	char name[40];
	float weight;
	int calorie;
};

int main(){
	using namespace std;
	CandyBar snack;
	cout<<"Name: ";
	cin.getline(snack.name,40);
	cout<<"Weight: ";
	cin>>snack.weight;
	cout<<"Calorie: ";
	cin>>snack.calorie;
	cout<<"\nMake sure what you input: "<<"\n";
	cout<<snack.name<<"\n"<<snack.weight<<"\n"<<snack.calorie;
	
	cin.get();
	return 0;
}
