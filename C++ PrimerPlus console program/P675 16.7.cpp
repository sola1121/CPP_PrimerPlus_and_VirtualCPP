#include <iostream>
#include <cstring>
#include <vector>

const int num=5;

int main(){
	using std::vector;
	using std::string;
	using std::cout;
	using std::cin;
	using std::endl;
	
	vector<int> ratings(num);
	vector<string> titles(num);
	cout<<"You will do exactly as told. You will enter.\n"
		<<num<<" book titles and your ratings(0-10).\n";
		
	int i;
	for (i=0; i<num; i++){
		cout<<"Enter title #"<<i+1<<": ";
		getline(cin, titles[i]);    //vector<string>
		cout<<"Enter your rating(0-10): ";
		cin>>ratings[i];    //vector<int>
		cin.get();
	}
	
	cout<<"Thank you. You entered the following:\nRating\tBook\n";
	for (i=0; i<num; i++)
		cout<<ratings[i]<<"\t"<<titles[i]<<endl;
	
	system("pause");
	return 0;
}
