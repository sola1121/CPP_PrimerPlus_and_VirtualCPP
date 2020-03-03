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
	//用于打印scores的私有方法 
	std::ostream & arr_out(std::ostream & os) const;
public:
	//使用初始化列表调用string类与valarray类的方法进行数据初始化 
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
