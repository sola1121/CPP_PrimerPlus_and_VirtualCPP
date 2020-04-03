#include <iostream>
#include "arraytp.h"

int main(){
	using std::cout;
	using std::endl;
	
	ArrayTP <int, 10> sums;
	ArrayTP <double, 10> aves;
	ArrayTP <ArrayTP<int, 5>, 10> twodee;    //twodee[10][5];
	
	int i, j;
	
//挨个给值	
	for (i=0; i<10; i++){
		sums[i]=0;
		for (j=0; j<5; j++){
			twodee[i][j]=(i+1)*(j+1);
			sums[i]+=twodee[i][j];
		}
		aves[i]=(double)sums[i]/10;
	}
	
//输出 
	for(i=0; i<10; i++){
		for (j=0; j<5; j++){
			cout.width(2);
			cout<<twodee[i][j]<<"   ";
		}
		cout<<": sum = ";
		cout.width(3);
		cout<<sums[i]<<", average = "<<aves[i]<<endl;
	}
	cout<<"Done~\n";
	
	system("pause");
	return 0;
} 
