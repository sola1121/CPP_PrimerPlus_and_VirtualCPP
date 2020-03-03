#include "stdafx.h"
#include <iostream.h>
#include <string.h>

class use{
private:
	char * inputvalue;
public:
	char * getinput(){
		cout<<"Please input a value: ";
		cin>>inputvalue;
		return inputvalue;
	}
};


int main(int argc, char* argv[])
{
	char * iput;
	use in;
	iput = in.getinput();
	cout<<"\n\nThis is the result."<<iput<<endl;
	
	return 0;
}
