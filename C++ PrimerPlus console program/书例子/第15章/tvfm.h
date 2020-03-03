#ifndef TVFM_H_
#define TVFM_H_

class Tv;

class Remote{
private:
	int mode;
public:
	enum { Off, On };
	enum { Minval, Maxval=20 };
	enum { Antenna, Cable };
	enum { TV, DVD };
	
	
	Remote(int m=Tv::TV): mode(m) {}
	
	bool volup(Tv & t);
	bool voldown(Tv & t);
	
	void onoff(Tv & t);
	
	void chanup(Tv & t);
	void chandown(Tv & t);
	void set_chan(Tv & t, int c);
	
	void set_mode(Tv & t);
	
	void set_input(Tv & t);
};

class Tv{
private:
	int state;
	int volume;
	int maxchannel;
	int minchannel;
	int channel;
	int mode;
	int input;
public:
	friend void Remote::set_chan(Tv & t, int c);
	
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
};

inline bool Remote::volup(Tv & t) { return t.volup(); }
inline bool Remote::voldown((Tv & t) { return t.voldown(); }

inline bool Remote::chanup(Tv & t) { t.chanup(); }
inline bool Remote::chandown(Tv & t) { t.chandown(); }
inline bool Remote::set_chan(Tv & t, int c) { t.channel=c; }

inline bool Remote::onoff(Tv & t) { t.onoff(); }

inline bool Remote::set_mode(Tv & t) { t.set_mode(); }

inline bool remote::set_input(Tv &t) { t.set_input(); }
