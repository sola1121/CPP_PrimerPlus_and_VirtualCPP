#include <iostream>

using namespace std;
const int arSize=10;

void strcount(const char * str);

int main(){
	char input[arSize];
	char next;
	
	cout<<"Enter a line:\n";
	cin.get(input,arSize);
	while (cin.good()){  //����Ϊ�� 
		cin.get(next);   //��ȡ����arSize�������ַ� 
		while (next!='\n')   //�Գ����Ľ������� 
			cin.get(next);
		strcount(input);
		cout<<"Enter next line (empty line to quize): \n";
		cin.get(input,arSize);
	}
	cout<<"Bye~\n";
	
	system("pause");
	return 0;
}

void strcount(const char * str){

	static int total=0;
	int count=0;          
	/* totalΪ��̬����,��������ֻ�ᶨ��һ��,
	����ȫ������total���������¶��弴ֵ��������
	,��ʼ�ն��ں����д��� ,��count��
	ÿ�κ�������ʱ���ᱻ���� 
	*/
	
	cout<<"\""<<"str"<<"\" contain ";
	while (*str++)
		count++;
	total+=count;
	cout<<count<<" characters\n";
	cout<<total<<" characters total\n";
}
