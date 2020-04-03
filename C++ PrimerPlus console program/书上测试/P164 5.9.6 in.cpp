#include<iostream>
int main(){
	using namespace std;
	char * years[3]={"The first year: ","The second year: ","The third year: "};
	char * monthname[12] = {"January","February","March","April","May","June", "July","August", "September","October","November","December"};
	int month[3][12];
	cout<<"The sale of C++ For Fools"<<endl;
	cout<<"Please input the 36 monthes marketing quantities of three years."<<endl<<endl;
	for (int a=1;a<=3;a++)
	{
		cout<<years[a-1]<<"\n";
		for (int b=1;b<=12;b++)
		{
			cout<<monthname[b-1]<<" :  ";
			cin>>month[a-1][b-1]; 
		}
	}
	
	cin.get();
	return 0;
}
