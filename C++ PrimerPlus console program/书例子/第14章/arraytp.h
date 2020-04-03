/* ʹ��ģ������ṩ����Ĵ�С */
#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>
#include <cstdlib>

template <typename T, int n>
class ArrayTP{
	T ar[n];
public:
	ArrayTP(){};
	explicit ArrayTP(const T & v);
	virtual T & operator[](int i);
	virtual T operator[](int i) const; 
};

template <class T, int n>
ArrayTP<T, n>::ArrayTP(const T & v){
	for (int i=0; i<n; i++)
		ar[i]=v;
}

template <class T, int n>
T & ArrayTP<T, n>::operator[] (int i){
	if (i<0 || i>=n){   //�ж�i��ֵ�Ƿ����㷶Χ 
		std::cerr<<"Error in array limits: "<<i<<" is out of range.\n";   //������� 
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
}

template <class T, int n>
T ArrayTP<T, n>::operator[] (int i) const{
	if (i<0 || i>=n){   //�ж�i��ֵ�Ƿ����㷶Χ 
		std::cerr<<"Error in array limits: "<<i<<" is out of range.\n";   //������� 
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
}

#endif
