#include <iostream>
#include "PointANDCircle.cpp"

using namespace std;

int main(int argc, char** argv) {
	Circle cc;
	cc.start(5,5,8);
	cc.move(3,2);
	cout<<"Բ�ε�Բ��X����Y����Ͱ뾶�ֱ�Ϊ: \n";
	
	cout<<cc.GetX()<<", "<<cc.GetY()<<"\n"<<cc.GetR()<<endl; 
	
	system("pause");
	return 0;
}
