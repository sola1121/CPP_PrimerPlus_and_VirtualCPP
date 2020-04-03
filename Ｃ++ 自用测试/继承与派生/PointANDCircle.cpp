class Point{
private:
	float x, y;
protected:
	float GetX2() { return x+x; } 
	float GetY2() { return y+y; }
public:
	void start(float xx=0, float yy=0){ x=xx; y=yy; } 
	void move(float xOf, float yOf) { x=x+xOf; y=y+yOf; }
	
	float GetX(){ return x; }
	float GetY(){ return y; }
}; 

class Circle: public Point {
private:
	float r;
public:
	void start(float X, float Y, float R) { Point::start(X, Y); r=R; }
	float GetR(){ return r; } 
};
