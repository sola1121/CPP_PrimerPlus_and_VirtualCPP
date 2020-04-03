#include <iostream>
using namespace std;
struct info{
	char name[20];
	int age : 2;
	int born;
};

int main(){
	info a {"A~BC~",333,2};
	cout<<a.name<<endl;
	cout<<a.age<<endl;
	
	system("pause");
	return 0;
}
