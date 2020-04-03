//����array����ĺ���

#include <iostream>
#include <array>
#include <cstring>

const int season=4;
const std::array<std::string, season> sname   //��������array string   sname 
{"Spring","Summer","Fall","Winter"};

void show(std::array<double, season> da);
void fill(std::array<double, season>*pa);

int main(){
	using namespace std;
	array<double, season> expenses;
	fill(&expenses);   //ʹ��&��ֵ 
	show(expenses);
	
	cout<<endl;
	system("pause");
	return 0;
} 

void show(std::array<double, season> da){
	using namespace std;
	
	double total=0.0;
	cout<<"\nEXPENSES\n";
	for (int i=0; i<season; i++){
		cout<<sname[i]<<": $"<<da[i]<<endl;
		total+=da[i];
	}
	cout<<"Total Expenses : $"<<total<<endl;
}

void fill(std::array<double, season>*pa){
	using namespace std;
	
	for (int i=0; i<season; i++){
		cout<<"Enter "<<sname[i]<<" expenses: ";
		cin>>(*pa)[i];    //����paָ���ֵ (*pa)[i]
	}
}
