#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
struct patron{
	std::string name;
	double num;
};
int main(){
	using namespace std;
	ifstream infile;
	infile.open("C:\\Users\\Administrator\\Desktop\\test1.txt");
	if (!infile.is_open()){
		cout<<"Could not open the file.\n";
		cout<<"Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	
	int i;
	infile>>i;
	infile.get();
	patron * patrons = new patron[i];
	for (int a=0;a<i;a++){
		infile.get();
		getline(infile,patrons[a].name);
		infile>>patrons[a].num;
	}
	
	for (int b=0;b<i;b++){
		if (patrons[b].name==""||patrons[b].name==" ")
			patrons[b].name="none";
		cout<<patrons[b].name<<"    "<<patrons[b].num<<endl;
	}
	cout<<endl;
	delete [] patrons;
	system("pause");
	return 0;
}
