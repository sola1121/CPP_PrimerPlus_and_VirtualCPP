#include <iostream>


using std::cout;
using std::endl;

template <typename T>
class HasFriend{
private:
	T item;
	static int ct;
public:
	HasFriend(const T & i): item(i) { ct++; }
	~HasFriend() { ct--; }
	friend void counts();
	friend void reports(HasFriend<T> &);
	void outAd() const;
	void outAd1() const; 
};

template <typename T> 
void HasFriend<T>::outAd() const{
	cout<<"The item's address: "<<&item<<endl; 
}
template <typename T>
void HasFriend<T>::outAd1() const{
	cout<<"The item's address: "<<&ct<<endl;
} 

//each specialization has its own static data number
template <typename T>
int HasFriend<T>::ct=0;

//non-template�����Ͳ���ģ�� friend to all HasFriend<T> classes
void counts(){
	cout<<"int count: "<<HasFriend<int>::ct<<"; ";
	cout<<"double count: "<<HasFriend<double>::ct<<endl;
}

//non_template�����Ͳ���ģ�� friend to all HasFriend<int> class
void reports(HasFriend<int> & hf){
	cout<<"HasFriend int: "<<hf.item<<endl;
}

//non_template�����Ͳ���ģ�� friend to all HasFriend<double> class
void reports(HasFriend<double> & hf){
	cout<<"HasFriend double: "<<hf.item<<endl;
}

int main(){
	cout<<"No objects declared: ";
	counts();
	
	HasFriend<int> hfi1(10);
	cout<<"After hfil declared: ";
	counts();
	
	HasFriend<int> hfi2(20);
	cout<<"After hfi2 declared: ";
	counts();
	
	HasFriend<double> hfdb(10.5);
	cout<<"After hfdb declared: ";
	counts();
	
	reports(hfi1);
	reports(hfi2);
	reports(hfdb);
	
	cout<<endl;
	cout<<&hfi1<<endl;
	cout<<&hfi2<<endl;
	cout<<&hfdb<<endl;
	
	
	cout<<"The size: "<<sizeof(hfi1)<<endl;
	cout<<"The size: "<<sizeof(hfi2)<<endl;
	cout<<"The size: "<<sizeof(hfdb)<<"  "<<sizeof(double)<<endl;
	
	cout<<"!!!\n"; 
	hfi1.outAd();
	hfi2.outAd();
	hfdb.outAd();
	
	cout<<"\n\nThe ct: \n";
	hfi1.outAd1();
	hfi2.outAd1();
	hfdb.outAd1();
	
	cout<<endl;
	system("pause");
	return 0;
}

/* ������int int double ��ģ����� 
** ����HasFriend<int> �� HasFriend<double> ��item�ĵ�ַ���ǲ�ͬ��, ����ct��һ����ַ 
** �����ǻ�û��ͨ�ĺ�������, ��ʵ�ϳ����������int��double  
*/
