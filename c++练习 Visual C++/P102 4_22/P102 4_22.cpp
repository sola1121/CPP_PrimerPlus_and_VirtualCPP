// P102 4_22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

namespace output{
	const int maxlen=128;
	int ivar=10;
	void putouttext(const char * pchData){
		if (pchData!=NULL)
			cout<<"PutoutText's namespace: "<<pchData;
	}
}

namespace Windows{
	typedef unsigned int UINT;
	void putoutext(const char * pchData){
		if (pchData!=NULL)
			cout<<"Windows namespace: "<<pchData;
	}
}

int main(int argc, char* argv[])
{
	using namespace output;
	putouttext ("Hello world!!");

	cout<<endl;
	cin.get();
	return 0;
}
