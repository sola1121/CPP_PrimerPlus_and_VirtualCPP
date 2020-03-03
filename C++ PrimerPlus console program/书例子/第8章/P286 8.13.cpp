//显式具体化
#include <iostream>
template<typename T> void swap(T &a, T &b);

struct job{
	char name[40];
	double salary;
	int floor;
}; 

int main(){
	using namespace std;
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i=10, j=20;
	cout<<"i, j = "<<i<<", "<<j<<".\n";
	cout<<"Using compiler-generated int swapper:\n";
	swap(i,j);
	cout<<"Now i, j = "<<i<<", "<<j<<".\n";
	
	job sue={"Susan Ysffee",7300.60,7};
	job sideny={"Sideny Taffee",78060.72,9};
	cout<<"Before job swapping:\n";
	show(sue);
	show(sideny);
	cout<<"After job swapping:\n";
	swap(sue,sideny);
	show(sue);
	show(sideny);
	
	system("pause");
	return 0;
}

template<typename T> void swap(T &a, T &b){
	T temp;
	temp=a;
	a=b;
	b=temp;
}

template<>void swap<job>(job &j1, job &j2){
	double t1;
	int t2;
	t1=j1.salary;
	j1.salary=j2.salary;
	j2.salary=t1;
	t2=j1.floor;
	t1.floor=j2.floor;
	j2.floor=t2;
}

void show(job &j){
	using std::cout;
	using std::endl;
	
	cout<<j.name<<": $"<<j.salary<<" on floor "<<j.floor<<endl;
}
