#include <iostream>
#include <string>

int main(){
	using namespace std;
	string xy[2][3]={{"1","2","3"},{"4","5","6"}};
	for (int x=0; x<2; x++){
		for (int y=0; y<3; y++){
			cout<<"This is xy["<<x<<"]["<<y<<"]="<<xy[x][y]<<endl;
		}
	}
}
