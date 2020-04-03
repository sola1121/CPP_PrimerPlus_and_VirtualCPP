#include <iostream>
#include <cmath>
#include "P301 9.1.h"

polar rect_to_polar(rect xypos){
	using namespace std;
	polar answer;
	
	answer.distance=sqrt(xypos.x * xypos.y + xypos.x * xypos.y);
	answer.angle=atan2(xypos.y,xypos.x);
	return answer;
}

void show_polar(polar dapos){
	using namespace std;
	const double red_to_deg=57.2958895;
	
	cout<<"Distance = "<<dapos.distance
		<<", angle = "<<dapos.angle*red_to_deg<<" degrees\n";
}
