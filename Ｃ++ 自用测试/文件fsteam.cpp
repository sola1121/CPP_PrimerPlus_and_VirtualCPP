#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	char str[20];
	fstream file, fileEXE, fileOut;
	file.open("C:\\Users\\Administrator\\Desktop\\日本語拼写练习.txt", ios::in);
	if (file.good()){
		file.getline(str, 20);
		cout<<str<<endl;
		file.read(str, 20);
		cout<<str<<endl; 
		file.close();
	}
	else{
		cout<<"Error when open.\n";
	}
	
	fileEXE.open("E:\\磁力补全.exe",ios::in|ios::binary);
	cout<<bool(fileEXE.is_open())<<endl;
	
	string name[]={"Mary", "John", "Hudy", "Wen"};
	int num[]={1,2,3,4};
	
	fileOut.open("C:\\Users\\Administrator\\Desktop\\Test.txt", ios::out|ios::binary|ios::trunc);
	if (fileOut.is_open()){
		for (int i=0; i<4; i++){
			fileOut.write((char*)&num[i], sizeof(int));
			fileOut<<name[i];
			fileOut<<"\n";
			fileOut<<ios::hex<<num[i];
		}
	}
	else{
		cerr<<"There is some wrong in Text"<<endl;
		exit(EXIT_FAILURE);
	}
	string inf;
	ifstream fileIn;
	fileIn.open("C:\\Users\\Administrator\\Desktop\\Test.txt", ios::in);
	fileIn>>inf;
	cout<<inf;
	
	system("pause");
	return 0;
}
