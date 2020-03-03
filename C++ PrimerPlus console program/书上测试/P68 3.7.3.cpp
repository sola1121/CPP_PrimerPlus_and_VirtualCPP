#include<iostream>
int main(){
	using namespace std;
	double deg, min, sec;
	cout<<"Enter a latitude in degrees, minutes, and seconds: "<<endl;
	cout<<"First, enter the degrees: ";
	cin>>deg;
	cout<<"Next, enter the minutes of arc: ";
	cin>>min;
	cout<<"Finally, enter the seconds of arc: ";
	cin>>sec;
	cout<<deg<<" degrees, "<<min<<" minutes, "<<sec<<" seconds = "<<deg + min/60 + sec/3600<<" degrees"<<endl;
	
	cin.get();
	return 0; 
}
