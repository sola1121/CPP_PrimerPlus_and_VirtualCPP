//可以用基类指针兼容其派生类的对象 

#include <iostream>

using namespace std;

class Student{
public:
	void display(){ cout<<"Student::display()"<<endl; }
};

class MiddleStudent: public Student{
public:
	void display(){ cout<<"MiddleStudent::display()"<<endl; }
};

class GraduatedStudent: public MiddleStudent{
	void display(){ cout<<"GraduatedStudent::display()"<<endl; }
};

void fun(Student * ptr){
	ptr->display(); 
} 

int main(){
	Student s;    //student对象 
	MiddleStudent ms;    //MiddleStudent 对象 
	GraduatedStudent gs;     //GraduatedStudent 对象
	 
	Student * ps;    //Student类的指针 
	
	ps=&s;    //Student类的指针指向Student类对象 
	fun(ps);    
	
	ps=&ms;    //Student类的指针指向MiddleStudent类对象 
	fun(ps);
	
	ps=&gs;    //Student类的指针指向GraduatedStudent类对象 
	fun(ps);
	
	system("pause");
	return 0;
}
