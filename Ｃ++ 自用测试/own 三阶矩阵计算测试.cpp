#include<iostream>
int main(){
	using namespace std;
	int a[9]={2,-2,0,-2,1,-2,0,-2,0};
	int x=-100,R;
	while (x<=100){
		R=(x-a[0])*(x-a[4])*(x-a[8])-(a[1])*(a[5])*(a[8])-(a[2])*(a[3])*(a[7])+(a[2])*(a[4])*(a[8])+(a[0])*(a[5])*(a[7])+(a[1])*(a[3])*(a[8]);
		if (R==0)
			cout<<"可行的值: "<<x<<"\n";
		x++;		
	}
	
	cout<<a[0]*a[8];
	return 0;
}
