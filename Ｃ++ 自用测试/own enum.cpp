#include<iostream>
int main(){
	using namespace std;
	enum spectrum {red, orange, green, blue, violet, indigo, ultraviolet};
	int color = blue;
	cout<<color<<" Here is color."<<endl;
	
	spectrum band;
	band=spectrum(3);   //������ǿ��ת�� 
	
	cout<<band;
	return 0;
}
