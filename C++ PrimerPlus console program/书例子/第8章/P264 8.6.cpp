//结构使用引用 
#include <iostream>
#include <cstring>

struct free_throws{
	std::string name;
	int made;
	int attempt;
	float percent;
};

//这几个函数都是使用引用形参,甚有返回引用结构的 
void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);   //返回free_thorws & 这是一个引用 

int main(){
	using std::cout;
	
	free_throws one={"Ifelsa Branch",13,14};
	free_throws two={"Andor Knott",10,16};
	free_throws three={"Minnie Max",7,9};
	free_throws four={"Whily Looper",5,9};
	free_throws five={"Long Long",6,14};
	free_throws team={"Throwgoods",0,0};
	free_throws dup;
	
	set_pc(one);
	display(one);
	accumulate(team,one);  //one 
	display(accumulate(team,two));  //two
	accumulate(accumulate(team,three),four);   //three four
	display(team);
	
	dup=accumulate(team,five);
	cout<<"Display team:\n";
	display(team);
	cout<<"Displaying dup after assignment:\n";
	display(dup);
	set_pc(four);
	accumulate(dup,five)=four;
	cout<<"Displaying dup after ill-advise assignment:\n";
	display(dup);
	
	cout<<"\n";
	system("pause");
	return 0;
}

void display(const free_throws & ft){
	using std::cout;
	cout<<"Name: "<<ft.name<<"\n";
	cout<<" Made: "<<ft.made<<"\t";
	cout<<" Attempt: "<<ft.attempt<<"\t";
	cout<<"Percent: "<<ft.percent<<"\n";
}

void set_pc(free_throws & ft){
	if (ft.attempt!=0)
		ft.percent=100.0f*float(ft.made)/float(ft.attempt);  //计算比率 
	else
		ft.percent=0;
}

free_throws & accumulate(free_throws & target, const free_throws & source){  //source值是不能更改的 
	target.attempt+=source.attempt;  //后排source值与前排更改目标值+= 
	target.made+=source.made;
	set_pc(target);  //计算比率,同样使用引用 
	return target;
}
