#include <iostream>
#include "tabtenn1.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using std::cout;
	using std::endl;
	
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatePlayer rplayer1(1140, "Mallory", "Duck", true);
	
	rplayer1.Name();
	if(rplayer1.HasTable())
		cout<<": has a table.\n";
	else
		cout<<": hasn't a table.\n";
	
	player1.Name();
	if(player1.HasTable())
		cout<<": has a table.\n";
	else
		cout<<": hasn't a table.\n";
	
	cout<<"Name:";
	rplayer1.Name();
	cout<<"; Rating: "<<rplayer1.Rating()<<endl;
//使用TableTennisPlayer初始化RatePlayer
	RatePlayer rplayer2(1212,player1);   
	/*
	RatePlayer(unsigned int r, const TableTennisPlayer & tp)
	:TableTennisPlayer(tp),rating(r)
	*/
	cout<<"Name: ";
	rplayer2.Name();
	cout<<"; Rating: "<<rplayer2.Rating()<<endl;  
	
	system("pause");
	return 0;
}
