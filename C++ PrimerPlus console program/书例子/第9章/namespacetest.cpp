#include <iostream>
#include "nasp.h"

int main(){

	using test::sum;
	using test::here;
	using std::cout;
	using std::endl;
	
	here j, k;
	j.a=10,j.b=20;
	k.a=1,k.b=2;
	
	int re;
	re=sum(j.a, k.a);
	cout<<re;
	
	system("pause");
	return 0;
}
