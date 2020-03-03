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
		exit(EXIT_FAILURE);   //�ж��Ƿ���ļ� 
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
	file_it(fout, objective, eps, LIMIT);   //������ļ� 
	file_it(cout, objective, eps, LIMIT);   //�������Ļ 
	cout<<"Done\n";
	
	system("pause");
	return 0;
}

void file_it(ostream & os, double fo, const double* fe, int n){
	ios::fmtflags initial;    //����ԭ���� 
	initial = os.setf(ios_base::fixed);    //����������ʹ�ö����ʾ��ģʽ 
	os.precision(0);
	os<<"Focal length of objective: "<<fo<<" mm\n";
	os.setf(ios::showpoint);   //������������ʾС�����ģʽ 
	os.precision(1);   //���þ��� 
	os.width(12);    //�����ֶο�� 
	os<<"f.1. eyeprice";
	os.width(15);
	os<<"magnification"<<endl;
	for (int i=0; i<n; i++){
		os.width(12);
		os<<fe[i];
		os.width(15);
		os<<int (fo/fe[i]+0.5)<<endl;
	}
	os.setf(initial);   //����ԭ���� 
}


