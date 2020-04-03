#include<iostream>

void sort(int arr[],int len);
using namespace std;
const int de=10;

int main(){
	int a[de],i,j,b;
 cout<<"请输入10个整数："<<endl;
 for(i=0;i<de;i++)
 {
  cin>>a[i];
 }
 for(j=0;j<de;j++)
 {
     for(i=de;j<i;i--)
     {
      if(a[i]>a[i-1])
      {
       b=a[i];
       a[i]=a[i-1];
       a[i-1]=b;
      }
     }
 }
 cout<<"大到小排序输出:"<<endl;
 for(i=0;i<de;i++)
 {
  cout<<a[i]<<"   ";
 }
 
 cout<<"\n\n大到小排序输出(from sort):"<<endl;
 
 sort(a,de);
 cin.get();
 return 0;
}

void sort(int arr[],int len){
	int itemp = 0;
	for (int x=0; x<len; x++){
		for (int y=len; y>=x; y--){
			if(arr[x]<arr[y]){
				itemp=arr[x];
				arr[x]=arr[y];
				arr[y]=itemp;
			}
		}
	}
for(int i=0;i<de;i++){
cout<<arr[i]<<"   ";
}	
}
