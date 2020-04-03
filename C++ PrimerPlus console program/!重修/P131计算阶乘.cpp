//¼ÆËã½×³Ë 

#include <iostream>
using namespace std;
const int num=10;
int main(){
	unsigned int result[num];
	for (int x=0; x<num; x++){
		result[x]=1;
	}
	
	for (int i=0; i<=num; i++){
		cout<<i<<"! = ";
		for (int a=i; a>=1; a--){
			result[i]*=a;
		}
		cout<<result[i]<<"\n";
	}
	
	cout<<endl;
	system("pause");
	return 0;
}
