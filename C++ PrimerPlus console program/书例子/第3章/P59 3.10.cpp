#include<iostream>
int main(){
	using namespace std;
	float hats, heads;
	
	cout.setf(ios_base::fixed, ios_base::floatfield);      //fixed-point
	cout<<"Enter your number: ";
	cin>>hats;
	cout<<"Enter your number: ";
	cin>>heads;
	
	cout<<"hats = "<<hats<<"; heads = "<<heads<<endl;
	cout<<"hats + heads = "<<hats + heads<<endl;
	cout<<"hats - heads = "<<hats - heads<<endl;
	cout<<"hats * heads = "<<hats * heads<<endl;
	cout<<"hats / heads = "<<hats / heads<<endl;
	
	cin.get();
	return 0;
}
