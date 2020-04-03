/* ���main�ǻ���use_stuc.cpp��,����û�� */

#include <iostream>
#include "studenti.h"

using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);
const int pupils=3;
const int quizzes=5;

int main(){
	Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};   //��������Nully�ն��� 
	
	int i;
	for (i=0; i<pupils; i++)
		set(ada[i], quizzes);   //���õ���Student���operator[]����� 
	cout<<"\nStudent List: \n";
	
	for (i=0; i<pupils; i++)
		cout<<ada[i].Name()<<endl;   //ͬ�����õ���Student��operator[]����, Name()Ҳ��Student�� 
	cout<<"\nResults:";
	
	for (i=0; i<pupils; i++){
		cout<<endl<<ada[i];   //ͬ�� 
		cout<<"average: "<<ada[i].Average()<<endl;
	}
	
	cout<<"Done.\n";
	
	system("pause");
	return 0;
}

void set(Student & sa, int n){
	cout<<"Please enter the student's name: ";
	getline(cin, sa);    //Student��sa��ֵ, ���� istream & getline(istream & is, Student & stu)��Ԫ 
	cout<<"Please enter "<<n<<" quiz scores: \n";
	for (int i=0; i<n; i++)
		cin>>sa[i];
	while (cin.get()!='\n')   //�����벢�ж� 
		continue;
}
