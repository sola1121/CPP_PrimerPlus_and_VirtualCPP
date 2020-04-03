//输入Y读取文本文件中的一行 

#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char txt[1000];
	char confirm='Y';
	ifstream inFile;
	inFile.open("C:\\Users\\Administrator\\Desktop\\test.txt");
	while (confirm=='Y'&&inFile.getline(txt,1000)){
		cout<<txt<<endl;
		cin>>confirm;
	}
	
	inFile.close(); 
	cout<<endl;
	system("pause");
	return 0;
}
