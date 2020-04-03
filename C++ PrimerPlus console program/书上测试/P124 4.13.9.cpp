#include<iostream>
#include<string>
struct CandyBar
{
	std::string name;
	float weight;
	int calorie;
};

int main(){
	using namespace std;
	CandyBar * snack = new CandyBar[3];
	int x, y;
	for(x=0;x<3;x++){
	cout<<"Name: ";
	cin>>snack[x].name;
	cout<<"Weight: ";
	cin>>snack[x].weight;
	cout<<"Calorie: ";
	cin>>snack[x].calorie;
	};
	cout<<"Put out . . ."<<endl;
	for(y=0;y<3;y++)
	{
		cout<<snack[y].name<<" , "<<snack[y].weight<<" , "<<snack[y].calorie<<"\n";	
	};
	
	delete [] snack;
	
	cin.get();
	return 0;
}
