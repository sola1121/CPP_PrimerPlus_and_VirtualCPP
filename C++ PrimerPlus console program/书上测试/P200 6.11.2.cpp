#include<iostream>
int main(){
	using namespace std;
	double donation[10];
	double avg,sum=0;
	int i=0,a=0,c=0;
	while (cin>>donation[i])
	{
		sum+=donation[i];
		i++;
		a++;
	}

	avg=sum/a;
	for (int b=0;b<=a-1;b++)
	{
		if (donation[b]>avg)
			c++;
	}
	
	cout<<"\nAverage: "<<avg<<"\n"<<"The number you entered biger than average has "<<c<<".\n";
	
	cin.get();
	return 0;
}
