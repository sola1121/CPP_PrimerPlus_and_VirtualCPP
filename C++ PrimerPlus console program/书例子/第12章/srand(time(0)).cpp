#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main(){
	char b;
	cin>>b;
	std::srand(std::time(0)); 
	while (cin.good()){
		int a = std::rand()%3+1;
		cout<<a<<endl;
		char * address=&b;
		cout<<(void*)address<<endl;
		cin>>b;
	}
	cout<<std::time(0);
	system("pause");
	return 0;
}
