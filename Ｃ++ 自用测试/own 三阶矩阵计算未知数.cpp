#include<iostream>
int main(){
	using namespace std;
	cout<<"计算未知数λ结果在百位内精确值0.1的三阶矩阵 [λ* E - A] = 0.\n"
		"各元素大小不大于1000,输入1000及以上的数字停止程序.\n";
	cout<<"A形如: \n"
		"a1  a2  a3\n"
		"a4  a5  a6\n"
		"a7  a8  a9\n\n";
		
	double a[9];
	for (int i=0;i<9;i++){
		cout<<"输入 a"<<i+1<<" 的值: "; 
		cin>>a[i];
			if (!cin){
				cout<<"输入的值不符合语法,请重新输入.\n";
				cin.clear();
				continue;;
			}
			else if (a[i][n]>=1000){
				cout<<"数字超出范围.\n";
				exit(0); 
			}	
	}
	
	double x=-100.0;
	while (x<=100.0){
		double R=(x-a[0])*(x-a[4])*(x-a[8])-a[1]*a[5]*a[8]-a[2]*a[3]*a[7]+a[2]*a[4]*a[8]+a[0]*a[5]*a[7]+a[1]*a[3]*a[8];
		if (R==0)
			cout<<"可行的值: "<<x<<"\n";
		x++;	
	}
	
	cin.get();
	return 0;
}
