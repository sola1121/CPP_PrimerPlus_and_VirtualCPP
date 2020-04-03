#include <iostream>
#include <cstring>

using namespace std;

const int SIZE=5;

void display(const string * sa, int n);

int main(){
	string list[SIZE];   //一个有SIZE个元素的string数组 
	cout<<"Enter your "<<SIZE<<" favorite astronomical sights: \n";
	for (int i=0; i<SIZE; i++){
		cout<<i+1<<": ";
		getline(cin,*(list+i));   //string类型使用 getline(cin,string类型名称) 
	}
	
	cout<<"Your list: \n";
	display(list, SIZE);
	
	system("pause");
	return 0; 
} 

void display(const string sa[], int n){       //sa[]==*(sa+i)  这只是在函数形参声明时才成立的. 
	for (int i=0; i<n; i++)
		cout<<i+1<<": "<<*(sa+i)<<endl;
}
