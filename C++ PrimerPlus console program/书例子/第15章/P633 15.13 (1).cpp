#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big{
	double stuff[200000];
};

int main(){
	Big * pb;
		
	cout<<"Trying to get a bog block of memory:\n";
	pb=new (std::nothrow) Big[10000];    //失败时将pd设置为空指针 
	cout<<"Got past the new request:\n";
	if (pb==0){
		cout<<"Could not allocate memory. Bye~\n";
		exit(EXIT_FAILURE); 
	} 
	
	cout<<"Memory successfully allocated\n";
	pb[0].stuff[0]=4;
	cout<<pb[0].stuff[0]<<endl;
	delete [] pb;

	system("pause");
	return 0;
}
