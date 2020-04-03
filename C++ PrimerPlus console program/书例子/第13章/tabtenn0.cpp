#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht)
:firstname(fn), lastname(ln), hasTable(ht){}  //fn ln ht 分别是构造函数中的形参 

void TableTennisPlayer::Name() const{
	std::cout<<lastname<<", "<<firstname;
}
