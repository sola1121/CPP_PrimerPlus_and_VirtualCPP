#include<iostream>
int main(){
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);      //fixed-point
	float tub=10.0/3.0;
	double mint=10.0/3.0;
	const float Million=1.0e6;
	
	cout<<"tub = "<<tub;
	cout<<", a million tub = "<<Million*tub;
	cout<<", \nand ten million tubs = ";
	cout<<10*Million*tub<<endl;
	
	cout<<"mint = "<<mint<<" and a million mints = ";
	cout<<Million*mint<<endl;
	
	cin.get();
	return 0;
}

//Õ{ÓÃcout.setf¸²Éwcout„h³ý”µ“þ½YÎ²µÄ0 
