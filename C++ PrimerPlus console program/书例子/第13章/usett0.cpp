#include <iostream>
#include "tabtenn0.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using std::cout;
	TableTennisPlayer player1("Chuck", "Blizzard", true);
	TableTennisPlayer player2("Tara", "Boomdea", false);
	
	player1.Name();
	if (player1.HasTable())
		cout<<": has a table.\n";
	else
		cout<<": hasn't a table.\n";
	
	player2.Name();
	if (player2.HasTable())
		cout<<": has a table.\n";
	else
		cout<<": hasn't a table.\n";
	
	system("pause");
	return 0;
}
