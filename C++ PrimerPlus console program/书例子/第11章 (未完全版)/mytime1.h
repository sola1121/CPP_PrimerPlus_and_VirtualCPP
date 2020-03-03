#ifndef MYTIME1_H_
#define MYTIME1_H_

class Time{
	int hours;
	int minutes;
public:
	Time();
	Time(int h=0, int m=0);
	void AddMin(int m);
	void AddHr(int h);
	void reset(int h=0, int m=0);
	Time operator+(const Time & t) const;
	void show();
};

#endif
