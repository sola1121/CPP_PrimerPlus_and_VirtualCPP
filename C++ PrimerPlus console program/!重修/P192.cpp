//在TXT文件中输入字符. 

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char text[1000];
	
	ofstream outFile;
	ofstream fout;
	
	outFile.open("C:\\Users\\Administrator\\Desktop\\testFile.txt");
	cin>>text; 

	outFile<<text<<endl;
	
	outFile.close();
	system("pause");
	return 0;
}
