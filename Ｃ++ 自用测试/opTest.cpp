#include <iostream>

class opTest{
	int i;
	int n;
public:
	opTest();
	opTest(int i_, int n_);
	opTest operator+(const opTest t) const;
	void show() const;
};

opTest::opTest(){
}

opTest::opTest(int i_, int n_){
	i=i_;
	n=n_;
}

opTest opTest::operator+(const opTest t) const {
	opTest sum;
	sum.i=i+t.i;
	sum.n=n+t.n;
	return sum;
}

void opTest::show() const{
	std::cout<<"i= "<<i<<", n= "<<n<<std::endl;
}

int mian(){
	using std::cout;
	
	opTest s1=opTest(5,3);
	opTest s2(2,1);
	opTest s3(7,9);
	opTest s4;
	
	s4=s1+s2;	
	//cout<<"First: "<<s4.show();
	s4=s4.operator+(s3);
	//cout<<"Second: "<<s4.show();
	
	system("pause");
	return 0;
}
