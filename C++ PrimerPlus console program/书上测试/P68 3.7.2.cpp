#include<iostream>
#include<cmath> 
int main(){
	using namespace std;
	double m, k, BMI, fe;
	cout<<"����������(�� m): ____ \b\b\b\b\b";
	cin>>m;
	cout<<"�����������(ǧ�� kg): ____ \b\b\b\b\b";
	cin>>k;
	cout<<endl; 
	
	BMI = k/pow(m,2);
	fe = m/0.0254/12;
	
	{
	if (BMI<=18.5)
	cout<<"���BMIֵΪ "<<BMI<<"   ����";
	else if (BMI<=24.99)
	cout<<"���BMIֵΪ "<<BMI<<"   ����";
	else if (BMI<=28.00) 
	cout<<"���BMIֵΪ "<<BMI<<"   ����";
	else if (BMI<=32.00) 
	cout<<"���BMIֵΪ "<<BMI<<"   ����"; 
	else
	cout<<"���BMIֵΪ "<<BMI<<"   �ǳ�����";
    }
    
    cout<<endl; 
	cout<<"���� "<<static_cast<int>(fe)<<"feet ";
	cout<<int ((fe - static_cast<int>(fe) ) * 12)<<"inch."<<endl;
	
	cin.get();
	return 0; 
} 
