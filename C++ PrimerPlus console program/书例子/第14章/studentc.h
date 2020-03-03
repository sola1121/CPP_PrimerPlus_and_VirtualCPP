#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <cstring>
#include <valarray>

class Student{
private:
	typedef std::valarray<double> ArrayDb;
	std::string name;
	ArrayDb scores;
	//���ڴ�ӡscores��˽�з��� 
	std::ostream & arr_out(std::ostream & os) const;
public:
	//ʹ�ó�ʼ���б����string����valarray��ķ����������ݳ�ʼ�� 
	Student() :name("null student"), scores() {}
	explicit Student(const std::string & s) :name(s), scores(){};
	explicit Student(int n) :name("Nully"), scores(n){}
	Student(const std::string & s, const ArrayDb & a) :name(s), scores(a){}
	Student(const char * str, const double * pd, int n) :name(str), scores(pd, n){}
	
	~Student(){} 
	double Average() const;
	const std::string & Name() const;
	double & operator[](int i);
	double operator[](int i) const;
	
	//friends
		//input
	friend std::istream & operator>>(std::istream & is, Student & stu);  //1 word
	friend std::istream & getline(std::istream & is, Student & stu);   //1 line
		//output
	friend std::ostream & operator<<(std::ostream & os, const Student & stu);
};


#endif
