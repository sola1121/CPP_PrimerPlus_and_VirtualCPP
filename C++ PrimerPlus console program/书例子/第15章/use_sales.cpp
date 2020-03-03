#include <iostream>
#include "sales.h"

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	//========����������double gross[12] ��ֵ��=======// 
	double vals1[12]={
		1220,1100,1122,2212,1232,2334,
		2884,2393,3302,2922,3002,3544
	};
	
	double vals[12]={
		12,11,22,21,32,34,
		28,29,33,29,32,35
	};
	
	//====������ʼ������====// 
	Sales sales1(2011, vals1, 12);
	LabeledSales sales2("Blogstar", 2012, vals, 12);
	
	cout<<"First try block:\n";
	
	try{
		int i;
		cout<<"Year = "<<sales1.Year()<<endl;
		for (i=0; i<12; ++i){
			cout<<sales1[i]<<' ';
			if (i%6==5)
				cout<<endl;//ֻ�ǻ��� 
		}
		cout<<"Year = "<<sales2.Year()<<endl;
		cout<<"Label = "<<sales2.Year()<<endl;
		for (i=0; i<=12; ++i){
			cout<<sales1[i]<<' ';      //���Sales1���� 
			if (i%6==5)
				cout<<endl;//ֻ�ǻ��� 
		}
		cout<<"End of try block 1.\n";
	}
	
	/* bad_index��logic_error��������, nbad_index��bad_index�������� */
	catch(LabeledSales::nbad_index & bad){
		cout<<bad.what();
		cout<<"Company: "<<bad.label_val()<<endl;
		cout<<"bad index: "<<bad.bi_val()<<endl;
	}
	catch(Sales::bad_index & bad){
		cout<<bad.what();
		cout<<"bad index: "<<bad.bi_val()<<endl;
	}
		cout<<"\nNext try block:\n";
		try{
			sales2[2]=37.5;
			sales1[20]=23345;
			cout<<"End of try block 2.\n";
		}
		catch(LabeledSales::nbad_index & bad){
			cout<<bad.what();
			cout<<"Company: "<<bad.bi_val()<<endl;
			cout<<"bad index: "<<bad.bi_val()<<endl;
		}
		catch(Sales::bad_index & bad){
			cout<<bad.what();
			cout<<"bad index: "<<bad.bi_val()<<endl;
		}
	cout<<"Done~\n";
	
	system("pause");
	return 0;
}
