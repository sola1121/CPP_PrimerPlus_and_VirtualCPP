#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <cstring>
#include <valarray>

class Student :private std::string, std::valarray<double>{
private:
	typedef std::valarray<double> ArrayDb;
	//用于打印scores的私有方法 
	std::ostream & arr_out(std::ostream & os) const;
public:
	//使用初始化列表直接调用string类与valarray类进行数据初始化 
	Student() :std::string("null student"), ArrayDb() {}
	explicit Student(const std::string & s) :std::string(s), ArrayDb(){};
	explicit Student(int n) :std::string("Nully"), ArrayDb(n){}
	Student(const std::string & s, const ArrayDb & a) :std::string(s), ArrayDb(a){}
	Student(const char * str, const double * pd, int n) :std::string(str), ArrayDb(pd, n){}
	
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
