#ifndef coordin_h___
#define coordin_h___

struct polar{
	double distance;
	double angle;
};

struct rect{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif
