#include <iostream>
using namespace std;
int main()
{

	//输出一个由星号组成的三角形(星号左对齐)
	int a;//控制组成三角形的星号的行数
	cout<<"请输入要组成三解形的星号的行数n(n>=2):\n";
	cin>>a;
	for(int i=0;i<a;i++)//控制行数
	{
		for(int j=0;j<=i;j++)//控制每行星号的个数。
		{
			cout<<"* ";//星号后加了一个空格（为使打印出一图形更直观）。
		}
		cout<<endl;
	}
	
	system("pause");	
	return 0;
}
