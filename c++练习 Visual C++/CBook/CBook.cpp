#include "stdafx.h"
#include <iostream.h>
#include <string.h>
#include <stdio.h>

class CBook{
public:
	char m_bookname[128];
	const unsigned int m_price;
	int m_chapterNum;
	CBook()                               //定义默认的构造函数
		:m_price(32),m_chapterNum(15)     //对数据成员进行初始化
	{
		strcpy(m_bookname,"天赋神权");
	}
};

class CBook2{
public:
	char m_bookname[128];
	const unsigned int m_price;
	int m_chapterNum;
	CBook2()
		:m_price(32),m_chapterNum(15)
	{
		strcpy(m_bookname,"大学英语");
		cout<<"构造函数被调用.\n";
	}
	CBook2(const CBook &book)        //定义复制构造函数
		:m_price(book.m_price)
	{
		m_chapterNum = book.m_chapterNum;  //复制m_chapterNum成员的数据
		strcpy(m_bookname,book.m_bookname);
		cout<<"复制构造函数成功\n";
	}
};

void OutPutBookInfo(CBook2 book){
	cout<<book.m_bookname;
}


int main(int argc, char* argv[])
{
	CBook bookT;
	cout<<bookT.m_bookname<<"\n";
	cout<<bookT.m_price;
	cout<<"\n\n\nHere is CBook2\n";
	CBook2 book2;
	OutPutBookInfo(book2);

	cin.get();
	return 0;
}