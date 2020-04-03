#ifndef WORKER_H_
#define WORKER_H_

#include <string>

class Worker{
	std::string fullname;
	long id;
public:
	Worker(): fullname("no one"), id(0L) {}
	Worker(const std::string & s, long n): fullname(s), id(n) {}
	virtual ~Worker()=0;
	virtual void set();
	virtual void show() const;
};

class Waiter : public Worker{
	int panache;
public:
	Waiter(): Worker(), panache(0) {}
	Waiter(const std::string & s, long n, int p=0): Worker(s, n), panache(p) {}
	Waiter(const Worker & wk, int p=0): Worker(wk), panache(p) {}
	void set();
	void show() const;
};

class Singer : public Worker{
protected:
	enum {other, alto, contralto, soprano, bass, baritone, tenor};   //表示声音类型的量 
	enum {Vtype=7};
private:
	static char * pv[Vtype];    //静态char指针 
	int voice;
public:
	Singer() : Worker(), voice(other) {}
	Singer(const std::string & s, long n, int v=other): Worker(), voice(v) {}
	Singer(const Worker & wk, int v=other): Worker(wk), voice(v) {}
	void set();
	void show() const;
};

#endif
