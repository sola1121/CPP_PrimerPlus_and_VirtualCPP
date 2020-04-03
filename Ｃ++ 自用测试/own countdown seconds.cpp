#include<iostream>
#include <windows.h>
#include<ctime>
int main(){
	using namespace std;
	cout<<"Enter countdown time in seconds: ";
	float secs;
	cin>>secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout<<"START\n";
	clock_t i = 0 * CLOCKS_PER_SEC;
	while (i < delay)
	{
			i += 1 * CLOCKS_PER_SEC;
			Sleep(1000);
			cout<<i/CLOCKS_PER_SEC<<"\n\a";
	}
	cout<<"\n";
	
	system("pause");
	return 0;
}
