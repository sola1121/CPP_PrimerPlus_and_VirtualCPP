#include <iostream>
int main(){
	using namespace std;
	int rats=101;
	int & rodents=rats;
	
	cout<<"rats = "<<rats;
	cout<<", rodents = "<<rodents<<endl;
	
	cout<<"rats address = "<<&rats;
	cout<<", rodents address = "<<&rodents<<endl;
	
	int bunnies = 50;
	rodents = bunnies;             //��ͼʹ����һ��ͬ���ͱ����ı����� 
	cout<<"bunnies = "<<bunnies;
	cout<<", rodents = "<<rodents<<endl;
	
	cout<<"bunnies address = "<<&bunnies;
	cout<<", rodents address = "<<&rodents<<endl;
	
	system("pause");
	return 0;
} 
