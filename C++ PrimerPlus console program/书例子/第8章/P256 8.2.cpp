#include <iostream>

int main(){
	using namespace std;
	
	int rats=101;
	int& rodents=rats;   //ʹ��int�����ò���ֵ 
	
	cout<<"rats= "<<rats;
	cout<<", rodents= "<<rodents<<endl;
	
	rodents++;  //����ֵ��һ,�Ƿ�Ӱ��ȫ��ֵ 
	
	cout<<"rats= "<<rats;
	cout<<", rodents= "<<rodents<<endl;
	
	//Address
	cout<<"Rats address= "<<&rats;
	cout<<"\nRodents address= "<<&rodents;
	
	cout<<endl;
	system("pause");
	return 0;
}
