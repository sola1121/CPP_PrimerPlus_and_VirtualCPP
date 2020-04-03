#include<iostream>
#include<fstream>
#include<cstdlib>
int main(){
	using namespace std;
	string str;
	char ch;
	int a=0;
	ifstream fin;
	fin.open("C:\\Users\\Administrator\\Desktop\\c++ fstream.txt");
	if (!fin.is_open()){
		cout<<"Could not open the file.";
		cout<<"Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	
	while (fin.good()){
		a++;
		fin>>ch;
	}
	if (fin.eof())
		cout<<"End of file reached.\n";
	else if (fin.fail())
		cout<<"Input terminated by data mismatch.\n";
	else
		cout<<"Input terminated for unknown reason.\n";

	cout<<"There are "<<a<<" characters.\n";

	cin.get();
	return 0;
}
