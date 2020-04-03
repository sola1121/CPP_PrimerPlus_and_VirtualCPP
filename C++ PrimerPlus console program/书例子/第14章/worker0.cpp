#include <iostream>
#include "worker0.h"

using std::cout;
using std::cin;
using std::endl;

/*Worker Methods*/
//must implement virtual destructor, even if pure
Worker::~Worker() { }

void Worker::set(){
	cout<<"Enter worker's name: ";
	getline(cin, fullname);
	cout<<"Enter worker's ID: ";
	cin>>id;
	while (cin.get()!='\n')
		continue;
}

void Worker::show() const{
	cout<<"Name: "<<fullname<<"\nEmployee ID: "<<id<<'\n';
} 

/*Waiter Methods*/
void Waiter::set(){
	Worker::set();
	cout<<"Enter waiter's panache rating: ";
	cin>>panache;
	while (cin.get()!='\n')
		continue;
}

void Waiter::show() const{
	cout<<"Category: waiter\n";
	Worker::show();
	cout<<"Panache rating: "<<panache<<"\n";
}

/*Singer Methods*/
char * Singer::pv[]={"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};    //static数组 

void Singer::set(){
	Worker::set();
	cout<<"Enter number for singer's vocal range:\n";
	int i;
	for (i=0; i<Vtype; i++){
		cout<<i<<": "<<pv[i]<<"   ";
		if (i%4==3)
			cout<<endl;
	}
	if (i%4!=0)
		cout<<endl;
	while (cin>>voice && (voice<0||voice>=Vtype))   //输入出错,与voice不符合输入值范围将会报错 
		cout<<"Please Enter a value >= 0 and < "<<Vtype<<endl;
	while (cin.get()!='\n')
		continue;
}

void Singer::show() const{
	cout<<"Category: singer\n";
	Worker::show();
	cout<<"Vocal range: "<<pv[voice]<<endl;
}
