#include<iostream>
#include<cmath> 
int main(){
	using namespace std;
	double m, k, BMI, fe;
	cout<<"输入你的身高(米 m): ____ \b\b\b\b\b";
	cin>>m;
	cout<<"输入你的体重(千克 kg): ____ \b\b\b\b\b";
	cin>>k;
	cout<<endl; 
	
	BMI = k/pow(m,2);
	fe = m/0.0254/12;
	
	{
	if (BMI<=18.5)
	cout<<"你的BMI值为 "<<BMI<<"   过轻";
	else if (BMI<=24.99)
	cout<<"你的BMI值为 "<<BMI<<"   正常";
	else if (BMI<=28.00) 
	cout<<"你的BMI值为 "<<BMI<<"   过重";
	else if (BMI<=32.00) 
	cout<<"你的BMI值为 "<<BMI<<"   肥胖"; 
	else
	cout<<"你的BMI值为 "<<BMI<<"   非常肥胖";
    }
    
    cout<<endl; 
	cout<<"你有 "<<static_cast<int>(fe)<<"feet ";
	cout<<int ((fe - static_cast<int>(fe) ) * 12)<<"inch."<<endl;
	
	cin.get();
	return 0; 
} 
