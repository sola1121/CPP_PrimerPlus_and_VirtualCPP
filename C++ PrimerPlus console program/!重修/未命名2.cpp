#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(){
	
	vector<int> elem (10);
	cin>>elem[0];
	cout<<elem[0]<<" here is vector."<<endl;
	array<int,10> arr={1,2,3,0};
	cout<<arr[2]<<" here is array."<<endl;
	
	system("pause");
	return 0;
}
