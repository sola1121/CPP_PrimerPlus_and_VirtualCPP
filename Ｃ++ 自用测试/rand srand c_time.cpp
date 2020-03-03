/*
**生成一个由时间所决定的值
**这个值因为只精确到秒, 所以规律很明显 
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
