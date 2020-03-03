#ifndef _CASE06_H_
#define _CASE06_H_

class Rect{
	int m_x;
	int m_y;
public:
	Rect(Rect &r);
	Rect(Rect *r);
	Rect();
	Rect(int x, int y);
	~Rect();
	
	int getX();
	int getY();
	void show() const{ std::cout<<m_x<<"   "<<m_y<<std::endl; } 
};


#endif 
