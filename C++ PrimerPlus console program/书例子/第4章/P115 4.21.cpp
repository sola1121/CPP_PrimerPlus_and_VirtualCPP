#include<iostream>
struct inflatable
{
	char name[30];
	float volume;
	double price;
	};
	
int main(){
	using namespace std;
	inflatable * ps = new inflatable;
	cout<<"Enter name of inflatable item: ";
	cin.get(ps->name,30);
	cout<<"Enter your volume in cubic feet: ";
	cin>>(*ps).volume;
	cout<<"Enter price: $";
	cin>>ps->price;
	cout<<"Name: "<<(*ps).name<<endl;
	cout<<"Volume: "<<ps->volume<<" cubic feet\n";
	cout<<"Price: $"<<ps->price<<endl;
	delete ps;
	
	cin.get();
	return 0;
}
