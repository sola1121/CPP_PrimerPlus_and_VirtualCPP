#include<iostream>
int main(){
	char ch;
	std::cout<<"Type, and I shall repeat it.\n";
	std::cin.get(ch);
	while (ch != '\n')
	{
		if (ch != '.')
			std::cout<<ch;
		else
			std::cout<<ch+1;
		std::cin.get(ch);
	}
	std::cout<<"\nPlease excuse the slight confusion.\n";
	
	return 0;
}
