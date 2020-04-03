#include <iostream>

using std::cout;
using std::endl;

template <typename T> void counts();
template <typename T> void report(T &);

template <class TT>
class HasFriendT{
private:
	TT item;
	
public:
	static int ct;   //�������������ⶨ���ԭ��
	
	HasFriendT(const TT & i): item(i) { ct++; }
	~HasFriendT() { ct--; }
	friend void counts();
	friend void report<>(HasFriendT<TT> &);
};

template <class T>
int HasFriendT<T>::ct=0;

//��Ԫ 
template <typename T>
void counts(){
	cout<<"template size: "<<sizeof(HasFriendT<T>)<<"; ";
	cout<<"template counts(): "<<HasFriendT<T>::ct<<endl;
} 

template <typename T>
void report(T & hf){
	cout<<hf.item<<endl;
}

int main(){
	counts<int>();
	
	HasFriendT<int> hfi1(10);
	HasFriendT<int> hfi2(20);     //�����HasFriendT<int>::ct +1  +1 
	HasFriendT<double> hfdb(10.5);    //�����HasFriendT<double>::ct +1 
	
	report(hfi1);
	report(hfi2);
	report(hfdb);
	
	cout<<"counts<int>() output: \n";
	counts<int>();
	cout<<"counts<double>() output: \n";
	counts<double>();
	
	system("pause");
	return 0;
}
