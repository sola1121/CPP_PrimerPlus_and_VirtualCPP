#include <iostream>
#include <exception>

using namespace  std;

class Bad; 

int main(){
	int i;
	
	try{
		cout<<"Input i: ";
		cin>>i;
		if (i>10)
			throw (i);
	}
	catch (int & x){
		cout<<"i > 10 is wrong. i is"<<x<<endl; 
	}
	
	system("pause");
	return 0;
} 


class Bad{
	int x;
public:
	Bad(int x): x(x) {}
	void Error();
};

void Bad::Error(){
	cout<<"i > 10 is wrong. i is"<<x<<endl;
}
