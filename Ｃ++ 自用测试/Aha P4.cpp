#include <iostream>

using namespace std;

int main(){
	
	int a[11],i,j,t;
	for (i=0; i<=10; i++)
		a[i]=0;           //��ʼ��a[i]
		
	for (i=1; i<=5; i++){
		scanf("%d",&t);      //ͨ����ַ,����t��ֵ 
		a[t]++
		; 
	}
	
	for (i=0; i<=10; i++)
		for (j=1; j<=a[i]; j++)
			printf("%d  ",i);
			
	cout<<endl; 
	cin.get();
	return 0;
}
