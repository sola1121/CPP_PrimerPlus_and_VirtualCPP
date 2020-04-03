#include <iostream>

int main(){
	using namespace std;
	
	int rats=101;
	int& rodents=rats;   //使用int的引用并赋值 
	
	cout<<"rats= "<<rats;
	cout<<", rodents= "<<rodents<<endl;
	
	rodents++;  //更改值加一,是否影响全局值 
	
	cout<<"rats= "<<rats;
	cout<<", rodents= "<<rodents<<endl;
	
	//Address
	cout<<"Rats address= "<<&rats;
	cout<<"\nRodents address= "<<&rodents;
	
	cout<<endl;
	system("pause");
	return 0;
}
