#include <iostream>

using std::cout;
using std::endl;

template <class T>
class ManyFriend{
public:
	
	T item;
	
	ManyFriend(const T & i): item(i) { }
	template <typename C, typename D> void show2(C&,D&);
};

template <typename C, typename D> void show2(C & c, D & d){
	cout<<c.item<<", "<<d.item<<endl;
}

int main(){
	ManyFriend<int> hfi1(10);
	ManyFriend<int> hfi2(20);
	ManyFriend<double> hfdb(10.5);
	
	cout<<"hfi1, hfi2: ";
	show2(hfi1, hfi2);
	cout<<"hfi1, hfdb: ";
	show2(hfi1, hfdb);
	
	system("pause");
	return 0;
}
