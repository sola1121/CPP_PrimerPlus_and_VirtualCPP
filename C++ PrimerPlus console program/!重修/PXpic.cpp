#include <iostream>
using namespace std;
int main()
{

	//���һ�����Ǻ���ɵ�������(�Ǻ������)
	int a;//������������ε��Ǻŵ�����
	cout<<"������Ҫ��������ε��Ǻŵ�����n(n>=2):\n";
	cin>>a;
	for(int i=0;i<a;i++)//��������
	{
		for(int j=0;j<=i;j++)//����ÿ���Ǻŵĸ�����
		{
			cout<<"* ";//�Ǻź����һ���ո�Ϊʹ��ӡ��һͼ�θ�ֱ�ۣ���
		}
		cout<<endl;
	}
	
	system("pause");	
	return 0;
}
