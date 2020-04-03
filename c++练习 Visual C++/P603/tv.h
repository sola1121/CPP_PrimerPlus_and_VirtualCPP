// tv.h: interface for the tv class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TV_H__9A754E1D_A449_4782_8F1B_BB3ABAD39A1C__INCLUDED_)
#define AFX_TV_H__9A754E1D_A449_4782_8F1B_BB3ABAD39A1C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Tv{
public:
	friend class Remote;    //Remote can access Tv private parts
	enum { Off, On };
	enum { Minval, Maxval=20 };
	enum { Antenna, Cable };
	enum { TV, DVD };
	 
	Tv(int s=Off, int mc=125): state(s), volume(5), maxchannel(mc), minchannel(1),
							   channel(2), mode(Cable), input(TV) {}
							   
//开关							   
	void onoff() { state=(state==On)?Off:On; }
	bool ison() const { return state==On; }
//音量 volume 
	bool volup();
	bool voldown();
//频道 channel 
	void chanup();
	void chandown();
//有线电视或天线调节模式
	void set_mode() { mode=(mode==Antenna)? Cable:Antenna; }
//TV or DVD
	void set_input() { input=(input==TV)? DVD:TV; }
	
	void settings() const;  //display all settings 	
private:
	int state;
	int volume;
	int maxchannel;
	int minchannel;
	int channel;
	int mode;
	int input;
};

class Remote{
private:
	int mode;
public:
	Remote(int m=Tv::TV): mode(m) {}
	
	bool volup(Tv & t) { return t.volup(); }
	bool voldown(Tv & t) { return t.voldown(); }
	
	void onoff(Tv & t) { t.onoff(); }
	
	void chanup(Tv & t) { t.chanup(); }
	void chandown(Tv & t) { t.chandown(); }
	void set_chan(Tv & t, int c) { t.channel=c; }
	
	void set_mode(Tv & t) { t.set_mode(); }
	
	void set_input(Tv & t) { t.set_input(); }
};

#endif // !defined(AFX_TV_H__9A754E1D_A449_4782_8F1B_BB3ABAD39A1C__INCLUDED_)
