#include <iostream>
#include <cstring>
#include <memory>

class Report{
	std::string str;
public:
	Report(const std::string s): str(s){ std::cout<<"Object created.\n"; }
	~Report(){ std::cout<<"delete "+str<<std::endl; }
	void comment(){ std::cout<<str<<std::endl; }
};

int main(){
	{	
		std::string s = "tradition way to create.";
		Report * ps = new Report(s);
		ps->comment();

		delete ps;
	}
	std::cout<<"\n";
	{
		std::auto_ptr<Report> ps(new Report("using auto_ptr"));
		ps->comment();
	}
	std::cout<<"\n";
	{
		std::shared_ptr<Report> ps(new Report("using shared_ptr"));
		ps->comment();
	}
	std::cout<<"\n";
	{
		std::unique_ptr<Report> ps(new Report("using unique_ptr"));
		ps->comment();
	}
	
	system("pause");
	return 0;
}
