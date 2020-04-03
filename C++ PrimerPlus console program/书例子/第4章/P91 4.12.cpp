#include<iostream>
struct inflatable{
	char name[20];
	float volume;
	double price;
};
int main(){
	using namespace std;
	inflatable bouquet={
		"sunflowers",
		0.20,
		12.49
	};
	inflatable chioce;
	cout<<"bouquet: "<<bouquet.name<<" for $";
	cout<<bouquet.price<<endl;
	
	chioce=bouquet;
	cout<<"chioce: "<<chioce.name<<" for $";
	cout<<chioce.price<<endl;
	
	cin.get();
	return 0;
}
