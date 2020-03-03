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
	rodents = bunnies;             //视图使用另一个同类型变量改变引用 
	cout<<"bunnies = "<<bunnies;
	cout<<", rodents = "<<rodents<<endl;
	
	cout<<"bunnies address = "<<&bunnies;
	cout<<", rodents address = "<<&rodents<<endl;
	
	system("pause");
	return 0;
} 
