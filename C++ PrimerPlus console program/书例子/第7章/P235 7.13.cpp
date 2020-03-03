//使用地址产地函数值, 计算坐标的长度与夹角值 

#include <iostream>
#include <cmath>

using namespace std;

struct polar{
	double distance;
	double angle;
};

struct rect{
	double x;
	double y;
};

void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main(){
	rect rplace;
	polar pplace;
	
	cout<<"Enter x and y: ";
	while (cin>>rplace.x>>rplace.y){
		rect_to_polar(&rplace, &pplace);   //使用角度转换函数 
		show_polar(&pplace);     //显示准换后的值 
		cout<<"Next two numbers (any characters to quit): ";
	}
	cout<<"Done\n";
	
	system("pause");
	return 0;
}

void rect_to_polar(const rect * pxy, polar * pda){
	pda->distance=sqrt(pxy->x * pxy->x * + pxy->y * pxy->y);   //计算向量长度 
	pda->angle=atan2(pxy->y,pxy->x);  //计算坐标点的夹角 
}

void show_polar(const polar * pda){
	const double Rad_to_deg = 57.29577951;   // 180/π 
	
	cout<<"deistance = "<<pda->distance;
	cout<<", angle = "<<pda->angle * Rad_to_deg;
	cout<<" degrees\n";
}
