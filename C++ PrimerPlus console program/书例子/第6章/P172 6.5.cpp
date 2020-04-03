#include<iostream>
const int ArSize = 6;
int main(){
	using namespace std;
	float naaq[ArSize];
	cout<<"Enter the NAAQs (New Age Awareness Quotients)"
		<<"of\nyour neighbors. Program terminates"
		<<"When you make \n"<<ArSize<<" entries"
		<<"or enter negative value.\n";
		
	int i=0;
	float temp;
	cout<<"Frist value: ";
	cin>>temp;
	while (i<ArSize&&temp>=0)
	{
		naaq[i]=temp;
		++i;
		if (i<ArSize)
		{
			cout<<"Next value: ";
			cin>>temp;
		}
	}
	if (0==i)
	{
		cout<<"No data--bye\n";
	}
	else
	{
		cout<<"Enter your NAAQ: ";
		float you;
		cin>>you;
		int count = 0;
		for (int j=0;j<i;j++)
		{
			if (naaq[j]>you)
			{
				++count;
			}
		}	
	cout<<count;
	cout<<" of your neighbors have greater awareness of\n"
		<<"the New Age than you do.\n";	
	}
	cin.get();
	return 0;
	}
