#include<iostream>
struct CandyBar
{
	char name[40];
	float weight;
	int calorie;
};

int main(){
	using namespace std;
	CandyBar snack
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout<<snack.name<<"\n"<<snack.weight<<"\n"<<snack.calorie;
	
	cin.get();
	return 0;
}
