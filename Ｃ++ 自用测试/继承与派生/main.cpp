#include <iostream>
#include "PointANDCircle.cpp"

using namespace std;

int main(int argc, char** argv) {
	Circle cc;
	cc.start(5,5,8);
	cc.move(3,2);
	cout<<"圆形的圆心X坐标Y坐标和半径分别为: \n";
	
	cout<<cc.GetX()<<", "<<cc.GetY()<<"\n"<<cc.GetR()<<endl; 
	
	system("pause");
	return 0;
}
