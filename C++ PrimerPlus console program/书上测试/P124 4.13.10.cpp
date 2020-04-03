#include<iostream>
#include<vector>
int main(){
	using namespace std;
	int i, x, y;
	cout<<"How many times did you run 40 meters: ";
	cin>>i;
	cout<<"Then write the time you ran."<<endl;
	vector<float> times(i);
	for(x=0;x<i;x++)
	{
		cout<<x+1<<" :  ";
		cin>>times[x];
	};
	float a=0;
	for(y=0;y<i;y++)
	{
		a = a + times[y];
	};
	float z;
	z = a / float(i);
	cout<<"Statistics."<<endl;
	cout<<"Your average grads is: "<<z;
	
	cin.get();
	return 0;
}

