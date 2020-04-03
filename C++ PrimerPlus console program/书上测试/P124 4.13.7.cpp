#include<iostream>
#include<string>
struct WW
{
	std::string company;
	float diameter;
	float weight;
};

int main(){
	using namespace std;
	int i;
	cout<<"How many pizzas do you have: ";
	cin>>i;
	WW analyze[i];
	for(int x=0;x<i;x++)
	{
		cout<<"Company: ";
		cin>>analyze[x].company;
		cout<<"Diameter: ";
		cin>>analyze[x].diameter;
		cout<<"Weight: ";
		cin>>analyze[x].weight;	
	};
	cout<<"Make sure: "<<endl;
	for(int y=0;y<i;y++)
	{
		cout<<analyze[y].company<<" , "<<analyze[y].diameter<<" , "<<analyze[y].weight<<"\n";
	};
	
	cin.get();
	return 0;
}
