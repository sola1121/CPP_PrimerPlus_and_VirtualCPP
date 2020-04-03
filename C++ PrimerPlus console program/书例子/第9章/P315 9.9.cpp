#include <iostream>

using namespace std;
const int arSize=10;

void strcount(const char * str);

int main(){
	char input[arSize];
	char next;
	
	cout<<"Enter a line:\n";
	cin.get(input,arSize);
	while (cin.good()){  //输入为真 
		cin.get(next);   //获取超过arSize的输入字符 
		while (next!='\n')   //对超出的进行清理 
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
	/* total为静态变量,在运行中只会定义一次,
	所以全运行中total都不会重新定义即值不会重置
	,其始终都在函数中存在 ,而count在
	每次函数调用时将会被重置 
	*/
	
	cout<<"\""<<"str"<<"\" contain ";
	while (*str++)
		count++;
	total+=count;
	cout<<count<<" characters\n";
	cout<<total<<" characters total\n";
}
