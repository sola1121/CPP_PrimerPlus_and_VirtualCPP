#include <iostream>
#include "tvfm.h"

const int MaxVal=100;
const int MinVal=0;

bool Tv::volup(){
	if (volume<MaxVal){
		volume++;
		return true;
	}
	else
		return false;
}

bool Tv::voldown(){
	if (volume>MinVal){
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup(){
	if (channel<maxchannel)
		channel++;
	else
		channel=1;
}

void Tv::chandown(){
	if (channel>minchannel)
		channel--;
	else
		channel=maxchannel;
}

void Tv::settings() const {
	using std::cout;
	using std::endl;
	
	cout<<"Tv is "<<(state == Off? "OFF":"ON")<<endl;
	if (state==On){
		cout<<"Volume setting = "<<volume<<endl
			<<"Channel setting = "<<channel<<endl
			<<"Mode = "<<(mode==Antenna ? "antenna":"cable")<<endl
			<<"Input = "<<(input == TV ? "TV":"DVD")<<endl;
	}
}
