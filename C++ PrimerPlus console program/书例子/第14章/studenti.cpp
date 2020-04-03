#include "studenti.h"

using std::ostream;
using std::endl;
using std::istream;
using std::string;

//public methods
double Student::Average() const{
	if (ArrayDb::size()>0)
		return ArrayDb::sum()/ArrayDb::size();
	else
		return 0;
}
/*double Student::Average() const{
	if (scores.size()>0)
		return scores.sum()/scores.size();
	else
		return 0;
}*/

const string & Student::Name() const{
	return (const string &) *this;    //��Student��ת��ΪString�� 
}
/*const string & Student::Name() const{
	return name;
}*/
double & Student::operator[](int i){
	return ArrayDb::operator[](i);    //use valarray<double>::operator[]()
}
/*
double & Student::operator[](int i){
	return scores[i];    //use valarray<double>::operator[]()
}*/
double Student::operator[](int i) const{
	return ArrayDb::operator[](i);   //ʹ��valarray��operator[](int n)���� 
}
/*
double Student::operator[](int i) const{
	return scores[i];
}*/

//private methods
ostream & Student::arr_out(ostream & os) const{
	int i;
	int lim=ArrayDb::size();   //int lim=scores.size();    ����ʹ��valarray��ĳ�Ա���� size 
	if (lim>0){
		for (i=0; i<lim; i++){
			os<<ArrayDb::operator[](i);   //os<<scores[i]<<"  "; ʹ��valarray��ķ��� //��������� 
			if (i%5==4)
				os<<endl;    //��Ӧ����ÿ�ĸ���һ�� 
		}
		if (i%5!=0)
			os<<endl;
	}
	else
		os<<" empty array ";
	return os;
}

//friends
//use string version of operator>>()
//��Ԫ�����β�Ϊ���ڵ���,����ֱ�ӵ���˽�г�Ա
istream & operator>>(istream & is, Student & stu){
	is>>(string &) stu;   //is>>stu.name;
	return is;
}
//use string friend getline(ostream &, const string &)
istream & getline(istream & is, Student & stu){
	getline(is, (string &) stu);    //getline(is, stu.name);    
	return is;
}

//use string version of operator<<()
ostream & operator<<(ostream & os, const Student & stu){
	os<<"Scores for "<<(string &) stu<<"\n";     //os<<"Scores for "<<stu.name<<":\n";
	stu.arr_out(os);   //use privete methods
	return os;
}
