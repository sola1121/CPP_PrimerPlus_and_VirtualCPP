#include <iostream>

using namespace std;

const int length=10;

int main(){
	int temp;
	int array[length]={50,4,9,4,5,7,6,34,9,8};
	
	  for (int i = 0; i < length; i++){   //�����ǰ�Ӻ�Ӷ��ǲ���Ӱ���, ��Ϊ���Ƕ�����ִ�����һ��ѭ����ſ�ʼ���� 
	  	cout<<i<<" :";
	  for (int j = i; j < length; ++j){
	  	cout<<j<<" ";
	  	if (j==length-1)
	  		cout<<endl;
	  		
	//	temp=array[i];
	//	array[i]=(array[i]<=array[j])? array[i]: array[j] ;
	//	array[j]=temp;
		  if (array[i] > array[j])
		  {
			  int temp;
			  temp = array[i];
			  array[i] = array[j];
			  array[j] = temp;
		  }
		}
	}
	
	cout<<endl;
	cout<<endl;	  
 	for (int a = 0; a < length; ++a)
		cout << array[a] << " ";
	
	system("pause");
	return 0;
}
