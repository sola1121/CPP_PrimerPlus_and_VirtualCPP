#include <iostream>
#ifndef STRING_H_
#define STRING_H_

class StringBad{
	char * str;
	int len;
	static int num_strings;
public:
	StringBad(const char * s);
	StringBad();
	~StringBad();
	friend std::ostream & operator<<(std::ostream & os, const StringBad & st);	
};

#endif
