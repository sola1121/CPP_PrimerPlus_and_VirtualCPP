#include<iostream>
int main(){
	using namespace std;
	cout<<"����δ֪���˽���ڰ�λ�ھ�ȷֵ0.1�����׾��� [��* E - A] = 0.\n"
		"��Ԫ�ش�С������1000,����1000�����ϵ�����ֹͣ����.\n";
	cout<<"A����: \n"
		"a1  a2  a3\n"
		"a4  a5  a6\n"
		"a7  a8  a9\n\n";
		
	double a[9];
	for (int i=0;i<9;i++){
		cout<<"���� a"<<i+1<<" ��ֵ: "; 
		cin>>a[i];
			if (!cin){
				cout<<"�����ֵ�������﷨,����������.\n";
				cin.clear();
				continue;;
			}
			else if (a[i][n]>=1000){
				cout<<"���ֳ�����Χ.\n";
				exit(0); 
			}	
	}
	
	double x=-100.0;
	while (x<=100.0){
		double R=(x-a[0])*(x-a[4])*(x-a[8])-a[1]*a[5]*a[8]-a[2]*a[3]*a[7]+a[2]*a[4]*a[8]+a[0]*a[5]*a[7]+a[1]*a[3]*a[8];
		if (R==0)
			cout<<"���е�ֵ: "<<x<<"\n";
		x++;	
	}
	
	cin.get();
	return 0;
}
