//�����û���ָ�������������Ķ��� 

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
	Student s;    //student���� 
	MiddleStudent ms;    //MiddleStudent ���� 
	GraduatedStudent gs;     //GraduatedStudent ����
	 
	Student * ps;    //Student���ָ�� 
	
	ps=&s;    //Student���ָ��ָ��Student����� 
	fun(ps);    
	
	ps=&ms;    //Student���ָ��ָ��MiddleStudent����� 
	fun(ps);
	
	ps=&gs;    //Student���ָ��ָ��GraduatedStudent����� 
	fun(ps);
	
	system("pause");
	return 0;
}
