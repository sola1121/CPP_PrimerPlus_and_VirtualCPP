// PXX.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <grphics.h>
#include <conio.h>


int main(){
	initgraph(640,480);
	
	circle(320,240,50);
	line(230,240,410,240);
	line(320,150,320,330);
	
	getch();
	closegraph();

	system("pause");
	return 0;
}