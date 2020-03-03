#include <iostream>
#include "test_for_link_head.h"
#include "test_for_link_head_function.cpp"

using namespace std;

int main(){
	sumnum xy;
	cin>>xy.x;
	cin>>xy.y;
	cout<<sum(xy)<<endl;
	
	system("pause");
	return 0;
}
