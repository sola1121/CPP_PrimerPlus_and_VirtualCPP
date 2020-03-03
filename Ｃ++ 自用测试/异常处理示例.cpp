#include <iostream>
#include <cstring>

using namespace std;

class MyException{
private:
	string message;
public:
	MyException(const string &message): message(message){}
	~MyException(){}
	const string & getMessage() const{ return message; }	
};

class Demo{
public: 
	Demo(){ cout<<"Constructor of Demo \n"; }
	~Demo(){ cout<<"Destructor of Demo \n"; }
};

void func() throw(MyException){
	Demo d;
	cout<<"Throw MyException in func() "<<endl;
	throw MyException("Exception throw by func()");
}

int mian(){
	cout<<"In main function.\n";
	
	try{
		func();
	}
	catch(MyException & e){
		cout<<"Caught an exception: "<<e.getMessage()<<endl;
	}
	
	cout<<"Resume the execution of main()"<<endl;
	system("pause");
	return 0;
}
