/*
**����һ����ʱ����������ֵ
**���ֵ��Ϊֻ��ȷ����, ���Թ��ɺ����� 
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	char c;

	cout<<"Input 'c' to continue: ";
	
	while (cin>>c && c=='c'){
		time_t ti=time(0);
		cout<<"Here is ti: "<<ti<<endl;
		srand(ti);
		cout<<rand()%100+1<<endl;
	}
	
	system("pause");
	return 0;
} 
