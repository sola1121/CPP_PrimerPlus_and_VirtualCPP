#include <iostream>
#include "extern_test.h"

using namespace std;

extern int it;
extern void sumwith_5(int);
int main(){
	
	sumwith_5(it);
	
	system("pause");
	return 0;
}
