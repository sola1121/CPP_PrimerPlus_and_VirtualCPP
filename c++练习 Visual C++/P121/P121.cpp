#include "stdafx.h"
#include <iostream.h>
#include <string.h>
#include <stdio.h>

~CBook(){     
//定义一个析构函数

	m_chapterNum=0;
	memset(m_bookName,0,128);
	cout<<"析构函数被调用.\n";
}


int main(int argc, char* argv[])
{
	CBook book;
	cout<<"定义一个CBook类对象.\n";
	return 0;
}
