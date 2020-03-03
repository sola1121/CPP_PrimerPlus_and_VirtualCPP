/* 这个main是基于use_stuc.cpp的,基本没改 */

#include <iostream>
#include "studenti.h"

using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);
const int pupils=3;
const int quizzes=5;

int main(){
	Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};   //创建三个Nully空对象 
	
	int i;
	for (i=0; i<pupils; i++)
		set(ada[i], quizzes);   //调用的是Student类的operator[]运算符 
	cout<<"\nStudent List: \n";
	
	for (i=0; i<pupils; i++)
		cout<<ada[i].Name()<<endl;   //同样调用的是Student的operator[]运算, Name()也是Student的 
	cout<<"\nResults:";
	
	for (i=0; i<pupils; i++){
		cout<<endl<<ada[i];   //同上 
		cout<<"average: "<<ada[i].Average()<<endl;
	}
	
	cout<<"Done.\n";
	
	system("pause");
	return 0;
}

void set(Student & sa, int n){
	cout<<"Please enter the student's name: ";
	getline(cin, sa);    //Student类sa赋值, 调用 istream & getline(istream & is, Student & stu)友元 
	cout<<"Please enter "<<n<<" quiz scores: \n";
	for (int i=0; i<n; i++)
		cin>>sa[i];
	while (cin.get()!='\n')   //再输入并判断 
		continue;
}
