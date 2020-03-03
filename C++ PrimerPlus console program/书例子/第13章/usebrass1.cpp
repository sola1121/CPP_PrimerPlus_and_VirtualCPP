#include <iostream>
#include "brass.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using std::cout;
	using std::endl;
	
	Brass Piggy("Porcelot Pigg", 381299, 4000.0);
	BrassPlus Hoggy("Horatio Hogg", 382288, 3000.0);
	Piggy.ViewAcct();
	cout<<endl;
	Hoggy.ViewAcct();
	cout<<endl;
	
	cout<<"Depositing $1000 into the Hogg account:\n";
	Hoggy.Deposit(1000.0);
	cout<<"New balance: $"<<Hoggy.Balance()<<endl<<endl;
	
	cout<<"Withdrawing $4200 from the Pigg Account:\n";
	Piggy.Withdraw(4200.0);
	cout<<"Piggy account balance: $"<<Piggy.Balance()<<endl<<endl;
	
	cout<<"Withdrawing $4200 from the Hogg Account:\n";
	Hoggy.Withdraw(4200.0);
	Hoggy.ViewAcct();
	
	cout<<endl;
	system("pause");
	return 0;
}
