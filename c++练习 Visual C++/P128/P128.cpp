#include "stdafx.h"
#include <iostream.h>
#include <stdio.h>

class CBook{
public:
	int m_pages;
	void outputpages(){
		cout<<"\n"<<m_pages<<"\n\n";
	}
	CBook operator+(const CBook book){   //定义"+"运算符的重载函数
	CBook bk;
	bk.m_pages=m_pages+book.m_pages;
	return bk;
	}
};

int main(int argc, char* argv[])
{
	CBook v1,v2,v3;
	v2.m_pages=40;
	v3.m_pages=50;
	v1=v2+v3;                    //实现了CBook对象的直接相加减
	cout<<v1.m_pages<<"\n";
	v1.outputpages();
	return 0;
}
