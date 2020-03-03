#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo> 

using namespace std;
	
class Grand{
	int hold;
public:
	Grand(int h): hold(h) { }
	virtual void speak() const { cout<<"I'm a Grand class!\n"; }
	virtual int value() const { return hold; }
}; 

class Superb: public Grand{
public:
	Superb(int h): Grand(h) { }
	void speak() const { cout<<"I'm a Superb class!!\n"; }
	virtual void say() const { cout<<"I hold the Superb vlue of "<<value()<<"!!\n"; }
};

class Magnificent: public Superb{
	char ch;
public:
	Magnificent(int h=0, char c='A'): Superb(h), ch(c){ }
	void speak() const { cout<<"I'm a Magnificent class!!!\n"; }
	void say() const { cout<<"I hold the character "<<ch<<" and the integer "<<value()<<"!!!\n"; }
};

Grand *GetOne();

int main(){
	srand(time(0));
	Grand * pg;
	Superb * ps;
	
	for (int i=0; i<5; i++){
		pg=GetOne();
		cout<<"Now processing type "<<typeid(*pg).name()<<".\n";
		pg->speak();
		if (ps = dynamic_cast<Superb *> (pg)  )
			ps->say();
		if ( typeid(Magnificent)==typeid(*pg) )
			cout<<"Yes, you're really manificent.\n";
	} 
	
	system("pause");
	return 0;
}


Grand * GetOne(){
	Grand * p;
	switch(std::rand()%3){
		case 0: p=new Grand(std::rand()%100);
				break;
		case 1: p=new Superb(std::rand()%100);
				break;
		case 2: p=new Magnificent(std::rand()%100, 'A'+std::rand()%26);
				break;
	}
	return p;
}
