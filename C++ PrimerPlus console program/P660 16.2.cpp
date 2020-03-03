#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

int main(){
	using namespace std;
	
	ifstream fin;
	fin.open("P660 16.2.txt");
	if (fin.is_open()==false){
		cerr<<"Can't open file.Bye~\n";
		exit(EXIT_FAILURE);
	}
	
	string item;
	int count=0;
	getline(fin, item, ':');
	while (fin){
		++count;
		cout<<count<<": "<<item<<endl;
		getline(fin, item, ':');
	}
	
	cout<<"Done~\n";
	fin.close();
	
	system("pause");
	return 0;
}
