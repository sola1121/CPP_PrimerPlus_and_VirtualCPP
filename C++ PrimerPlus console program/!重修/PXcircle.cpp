#include <grphics.h>
#include <conio.h>

using namespace std;
int main(){
	initgraph(640,480);
	
	circle(320,240,50);
	line(230,240,410,240);
	line(320,150,320,330);
	
	getch();
	closegraph();
}
