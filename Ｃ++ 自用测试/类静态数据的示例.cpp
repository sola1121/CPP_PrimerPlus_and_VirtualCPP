//�ྲ̬����  �����е�ͬ�����ʹ�õĹ̶�ֵ 
//��̬��Ա����  ����Ҫ�������Ե��þ�̬���ݳ�Ա, ��Ϊ��̬���ݳ�Ա�Ǵ�ҵ� 
#include <iostream>

using namespace std;

class Point{
private:
	static int count;  //��̬���� 
	float x, y;
public:
	Point(int xx, int yy):x(xx), y(yy){ ++count; }
	Point(Point &c) { x=c.y; this->y=c.x; ++count; }
	
	void show(){ cout<<"The point is ("<<x<<", "<<y<<")"<<endl; }
	void numP(){ cout<<"Here are "<<count<<" point(s)."<<endl; }   //��Ҫ����������count
	static void numPP() { cout<<"The static function to show count: "<<count<<endl; }    //��̬���ݳ�Ա 
};

int Point::count = 0;   //�������ʼ����̬���� 

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
