//ʹ�õ�ַ���غ���ֵ, ��������ĳ�����н�ֵ 

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
		rect_to_polar(&rplace, &pplace);   //ʹ�ýǶ�ת������ 
		show_polar(&pplace);     //��ʾ׼�����ֵ 
		cout<<"Next two numbers (any characters to quit): ";
	}
	cout<<"Done\n";
	
	system("pause");
	return 0;
}

void rect_to_polar(const rect * pxy, polar * pda){
	pda->distance=sqrt(pxy->x * pxy->x * + pxy->y * pxy->y);   //������������ 
	pda->angle=atan2(pxy->y,pxy->x);  //���������ļн� 
}

void show_polar(const polar * pda){
	const double Rad_to_deg = 57.29577951;   // 180/�� 
	
	cout<<"deistance = "<<pda->distance;
	cout<<", angle = "<<pda->angle * Rad_to_deg;
	cout<<" degrees\n";
}
