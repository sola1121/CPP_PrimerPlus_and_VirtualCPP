#include<iostream>
int main(){
	using namespace std;
	int i;
	cout<<"How many numbers will be added. ";
	cin>>i;
	float num[i],sum=0.0;
	for (int a=1;a<=i;a++)
	{
		cin>>num[a-1];
	}
	cout<<endl<<"Then sum: "<<"\n";
	for (int b=1;b<=i;b++)
	{
		sum+=num[b-1];
	}
	cout<<sum<<endl<<endl;
	
	system("pause");
	return 0;
}
