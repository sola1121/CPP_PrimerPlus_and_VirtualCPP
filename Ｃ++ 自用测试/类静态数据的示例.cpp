//类静态数据  给所有的同类对象使用的固定值 
//静态成员函数  不需要对象便可以调用静态数据成员, 因为静态数据成员是大家的 
#include <iostream>

using namespace std;

class Point{
private:
	static int count;  //静态数据 
	float x, y;
public:
	Point(int xx, int yy):x(xx), y(yy){ ++count; }
	Point(Point &c) { x=c.y; this->y=c.x; ++count; }
	
	void show(){ cout<<"The point is ("<<x<<", "<<y<<")"<<endl; }
	void numP(){ cout<<"Here are "<<count<<" point(s)."<<endl; }   //需要对象来访问count
	static void numPP() { cout<<"The static function to show count: "<<count<<endl; }    //静态数据成员 
};

int Point::count = 0;   //在类外初始化静态数据 

int main(){
	
	Point a(5, 3);
	Point *b;
	b=new Point(a);
	a.show();
	b->show();
	b->numP();
	
	Point::numPP();
	delete b;
	
	system("pause");
	return 0;
} 
