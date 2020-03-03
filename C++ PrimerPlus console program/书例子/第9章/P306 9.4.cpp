#include <iostream>
void oil(int);

int main(){
	using namespace std;
	int texas=31;
	int year=2011;
	cout<<"In main(), texas = "<<texas<<", &texas = "<<&texas<<endl;
	cout<<"In main(), year = "<<year<<", &year = "<<&year<<endl;
	oil(texas);
	cout<<"In main(), texas = "<<texas<<", &texas = "<<&texas<<endl;
	cout<<"In main(), year = "<<year<<", &year = "<<&year<<endl;
	
	system("pause");
	return 0;
}

void oil(int x){
	using std::cout;
	using std::endl;
	
	int texas=5;
	
	cout<<"In oil(), texas = "<<texas<<", &texas = "<<&texas<<endl;
	cout<<"In oil(), x = "<<x<<", &x = "<<&x<<endl;
	
	/*这里写入个语句块*/
	{
		int texas=113;
		
		cout<<"In oil() block, texas = "<<texas<<", &texas = "<<&texas<<endl;
		cout<<"In oil() block, x = "<<x<<", &x = "<<&x<<endl;   //这里的x与函数的x是同一个x 
	}
	
	cout<<"Post-block texas = "<<texas<<", &texas = "<<&texas<<endl;
}
