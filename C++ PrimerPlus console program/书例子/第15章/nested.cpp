#include <iostream>
#include <cstring>
#include "queuetp.h"

int main(){
	using std::endl;
	using std::cout;
	using std::cin;
	using std::string;
	
	QueueTP<string> cs(5);
	string temp;
	
	while (!cs.isfull()){
		cout<<"Please enter your name. You will be served in the order of arrival.\n"
			<<"name: ";
		getline(cin, temp);
		cs.enqueue(temp);
	}
	cout<<"The queue is full. processing begins!\n";
	
	while (!cs.isempty()){
		cs.dequeue(temp);
		cout<<"Now processing "<<temp<<"...\n"; 
	}
	
	cout<<endl;
	system("pause");
	return 0;
}
