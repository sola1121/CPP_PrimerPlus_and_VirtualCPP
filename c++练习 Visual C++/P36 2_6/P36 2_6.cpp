// P36 2_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>


struct stu{
	char * name;
	char * sex;
	int age;
	char * Ad;
};

int main(int argc, char* argv[])
{
	stu student;
	student.name="jack smith";
	student.age=10;
	cout<<student.name<<"\n";
	return 0;
}
