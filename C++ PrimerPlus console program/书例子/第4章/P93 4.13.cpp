#include<iostream>
struct inflatable{
	char name[20];
	float volume;
	double price;
};

int main(){
	using namespace std;
	inflatable guests[3]={
		{"Bambi",0.5,21.99},
		{"Godzilla",2000,565.99},
		{"AB",10,45.36}
	};
	
	cout<<"The guest "<<guests[0].name<<" and "<<guests[1].name
		<<"\nhave a combined volume of "
		<<guests[0].volume + guests[1].volume<<" cubic feet.\n";
	cout<<endl<<endl;
	cout<<guests[2].name<<"   "<<guests[2].price<<"   "<<guests[2].volume;
		
	cin.get();
	return 0;
}
