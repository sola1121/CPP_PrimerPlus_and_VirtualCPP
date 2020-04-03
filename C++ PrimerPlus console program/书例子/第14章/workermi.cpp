#include <iostream>
#include "workermi.h"
using std::cout;
using std::cin;
using std::endl;

/*Worker Methods*/
Worker::~Worker() {}

	//protected methods
void Worker::Data() const{
	cout<<"Name: "<<fullname<<endl<<"Employee ID: "<<id<<endl;
}

void Worker::Get(){
	getline(cin, fullname);
	cout<<"Enter Worker's ID: ";
	cin>>id;
	while (cin.get()!='\n')
		continue;
}

/*Waiter Methods*/
void Waiter::set(){
	cout<<"Enter waiter's name: ";
	Worker::Get();
	Get();
}

void Waiter::show() const{
	cout<<"Category: waitre\n";
	Worker::Data();
	Data();
}

	//protected methods
void Waiter::Data() const{
	cout<<"Panache rating: "<<panache<<endl;
}

void Waiter::Get(){
	cout<<"Enter waiter's panache rating: ";
	cin>>panache;
	while (cin.get()!='\n')
		continue;
}

/*Singer Methods*/
char * Singer::pv[Singer::Vtype]={"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};    //staticÖ¸ÕëÊý×é

void Singer::set(){
	cout<<"Enter singer's name: ";
	Worker::Get();
	Get();
} 

void Singer::show() const{
	cout<<"Category: singer\n";
	Worker::Data();
	Data();
}

	//protected methods
void Singer::Data() const{
	cout<<"Vocal range: "<<pv[voice]<<endl;
}

void Singer::Get(){
	cout<<"Enter number for singer's vocal range: \n";
	int i;
	for (i=0; i<Vtype; i++){
		cout<<i<<": "<<pv[i]<<"   ";
		if (i%4==3)
			cout<<endl;
	}
	if(i%4!=0)
		cout<<"\n";
	cin>>voice;
	while (cin.get()!='\n')
		continue;
}

/*SingingWaiter Methods*/
void SingingWaiter::Data() const{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get(){
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::set(){
	cout<<"Enter singing waiter's name: ";
	Worker::Get();
	Get();
}

void SingingWaiter::show() const{
	cout<<"Category: singing waiter\n";
	Data();
}

