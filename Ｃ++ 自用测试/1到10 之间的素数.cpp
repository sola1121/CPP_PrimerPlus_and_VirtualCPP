#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){

	int i, j, flag, k;
	for (i=2; i<=100; i++){
		flag=1;
		k=int (i/2);
		for (j=2; j<=k; j++){
			if (i%j==0){
				flag=0;
				break;
			}
		}
	if (flag) cout<<i<<"   ";
	}

	cout<<endl;
	system("pause");
	return 0;
}
