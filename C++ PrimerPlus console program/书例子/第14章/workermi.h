#ifndef WORKERMI_H_
#define WORKERMI_H_

#include <cstring>

class Worker{
private:
	std::string fullname;
	long id;
protected:
	virtual void Data() const;
	virtual void Get();
public:
	Worker(): fullname("no one"), id(0L) {}
	Worker(const std::string & s, long n): fullname(s), id(n) {}
	virtual ~Worker()=0;
	virtual void set()=0;
	virtual void show() const=0;
};

class Waiter: virtual public Worker{
	int panache;
protected:
	void Data() const;
	void Get();
public:
	Waiter(): Worker(), panache(0) {}
	Waiter(const std::string & s, long n, int p=0): Worker(s, n), panache(p) {}
	Waiter(const Worker & wk, int p=0): Worker(wk), panache(p) {}
	void set();
	void show() const;
};

class Singer: virtual public Worker{
protected:
	enum {other, alto, contralto, soprano, bass, baritone, tenor};   //表示声音类型的量 
	enum {Vtype=7};
	void Data() const;
	void Get();
private:
	static char * pv[Vtype];
	int voice;
public:
	Singer(): Worker(), voice(other) {}
	Singer(const std::string & s, long n, int v=other): Worker(s, n), voice(v) {}
	Singer(const Worker & wk, int v=other): Worker(wk), voice(v) {}
	void set();
	void show() const;
};

/* multiple inheritance */
class SingingWaiter: public Singer, public Waiter{
protected:
	void Data() const;
	void Get();
public:
	SingingWaiter() {}
	SingingWaiter(const std::string & s, long n, int p=0, int v=other)
				: Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
	SingingWaiter(const Worker & wk, int p=0, int v=other)
				: Worker(wk), Waiter(wk, p), Singer(wk, v) {}
	SingingWaiter(const Waiter & wt, int v=other)
				: Worker(wt), Waiter(wt), Singer(wt, v) {}
	SingingWaiter(const Singer & sg, int p=0)
				: Worker(sg), Waiter(sg, p), Singer(sg) {}
	void set();
	void show() const;
};

#endif 
