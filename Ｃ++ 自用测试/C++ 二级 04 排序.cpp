#include <iostream>

using namespace std;

const int length=10;

int main(){
	int temp;
	int array[length]={50,4,9,4,5,7,6,34,9,8};
	
	  for (int i = 0; i < length; i++){   //这里的前加后加都是不会影响的, 因为他们都是在执行完第一轮循环后才开始调用 
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
