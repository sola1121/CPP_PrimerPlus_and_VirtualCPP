// P92 4_13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>
#include <stdarg.h>

void outputinfor(int num,...){
	va_list arguments;
	va_start(arguments,num);
	while (num--){
		char *pchdata = va_arg(arguments, char*);
		int idata = va_arg(arguments,int);
		cout<<"\n"<<pchdata
			<<"\n"<<idata;
	}
	va_end(arguments);
}

int main(int argc, char* argv[])
{
	outputinfor(2,"Beijing","Olympic Games",2008);

	cin.get();
	return 0;
}
