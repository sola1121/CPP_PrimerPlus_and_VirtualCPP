#include <iostream>

using namespace std;

enum ex1 { A, B, C};
enum struct ex2 { A, B1, B2};

int main(){
	ex2 w;
	cout<<w;
	
	system("pause");
	return 0;
}
