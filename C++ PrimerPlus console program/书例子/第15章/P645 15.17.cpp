#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

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

Grand * GetOne();

int main(){
	std::srand(std::time(0));
	
	Grand * pg;
	Superb * ps;
	
	for (int i=0; i<5; i++){
		pg=GetOne();
		pg->speak();
		if( ps = dynamic_cast<Superb *> (pg) )   //判断ps指针能否使用pg的指向,使得基类指针可以指向派生类 
			ps->say();
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
