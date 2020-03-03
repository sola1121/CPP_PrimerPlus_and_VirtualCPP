#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT=5;

int main(){
	ofstream fout;
	const char* fn = "ep-data.txt";
	fout.open("C:\\Users\\Administrator\\Desktop\\ep-data.txt");   //output in ep-data.txt 
	if (!fout.is_open()){
		cout<<"Can't open "<<fn<<". Bye\n";
		exit(EXIT_FAILURE);   //判断是否打开文件 
	}
	double objective;
	cout<<"Enter the focal length of your telescope objective in mm: ";
	cin>>objective;
	double eps[LIMIT];
	cout<<" Enter the focal lengths , in mm, of "<<LIMIT<<" eyeprices:\n";
	for (int i=0; i<LIMIT; i++){
		cout<<"Eyeprice #"<<i+1<<": ";
		cin>>eps[i];
	}
	file_it(fout, objective, eps, LIMIT);   //输出至文件 
	file_it(cout, objective, eps, LIMIT);   //输出至屏幕 
	cout<<"Done\n";
	
	system("pause");
	return 0;
}

void file_it(ostream & os, double fo, const double* fe, int n){
	ios::fmtflags initial;    //保存原设置 
	initial = os.setf(ios_base::fixed);    //将对象置于使用定点表示法模式 
	os.precision(0);
	os<<"Focal length of objective: "<<fo<<" mm\n";
	os.setf(ios::showpoint);   //将对象置于显示小数点的模式 
	os.precision(1);   //设置精度 
	os.width(12);    //设置字段宽度 
	os<<"f.1. eyeprice";
	os.width(15);
	os<<"magnification"<<endl;
	for (int i=0; i<n; i++){
		os.width(12);
		os<<fe[i];
		os.width(15);
		os<<int (fo/fe[i]+0.5)<<endl;
	}
	os.setf(initial);   //载入原设置 
}


