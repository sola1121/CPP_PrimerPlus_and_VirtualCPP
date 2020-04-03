#include<iostream>
#include<cmath>
struct polar{
	double distance;
	double angel;
};
struct rect{
	double x;
	double y;
};
polar rect_to_polar(rect);
void show_polar(polar);

int main(){
	using namespace std;
	rect rplace;
	polar pplace;
	
	cout<<"Enter the X and Y values: ";
	while (cin>>rplace.x>>rplace.y){
		pplace=rect_to_polar(rplace);
		show_polar(pplace);
		cout<<"Next two numbers (q to quit): ";
	}
	cout<<"Done.\n";
	
	cin.get();
	return 0;
}

polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	
	answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
	answer.angel=atan2(xypos.y, xypos.y);
	return answer;
}

void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg=57.29577951;
	
	cout<<"distance = "<<dapos.distance;
	cout<<", angel = "<<dapos.angel*Rad_to_deg;
	cout<<" degrees\n";
}
