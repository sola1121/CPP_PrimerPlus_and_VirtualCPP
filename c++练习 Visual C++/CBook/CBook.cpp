#include "stdafx.h"
#include <iostream.h>
#include <string.h>
#include <stdio.h>

class CBook{
public:
	char m_bookname[128];
	const unsigned int m_price;
	int m_chapterNum;
	CBook()                               //����Ĭ�ϵĹ��캯��
		:m_price(32),m_chapterNum(15)     //�����ݳ�Ա���г�ʼ��
	{
		strcpy(m_bookname,"�츳��Ȩ");
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
		strcpy(m_bookname,"��ѧӢ��");
		cout<<"���캯��������.\n";
	}
	CBook2(const CBook &book)        //���帴�ƹ��캯��
		:m_price(book.m_price)
	{
		m_chapterNum = book.m_chapterNum;  //����m_chapterNum��Ա������
		strcpy(m_bookname,book.m_bookname);
		cout<<"���ƹ��캯���ɹ�\n";
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