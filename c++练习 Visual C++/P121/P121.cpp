#include "stdafx.h"
#include <iostream.h>
#include <string.h>
#include <stdio.h>

~CBook(){     
//����һ����������

	m_chapterNum=0;
	memset(m_bookName,0,128);
	cout<<"��������������.\n";
}


int main(int argc, char* argv[])
{
	CBook book;
	cout<<"����һ��CBook�����.\n";
	return 0;
}
