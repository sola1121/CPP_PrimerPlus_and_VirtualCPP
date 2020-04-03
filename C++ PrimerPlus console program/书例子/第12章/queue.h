#ifndef QUEUE_H_
#define QUEUE_H_

class Customer{
private:
//有到达时间和加工时间 
	long arrive;
	int processtime;
public:
	Customer(){ arrive=processtime=0; }
	void set(long when);
	long when() const {return arrive;}
	int ptime() const {return processtime;}
};

typedef Customer Item;

class Queue{
private:
//class scop definitions
	//node(节点) is a nested(镶嵌) structure definition local to this c
	struct Node{ Item item; struct Node * next;};  //包含Customer类 
	enum {Q_SIZE=10};
//private class members
	Node *front;
	Node *rear;
	int items;
	const int qsize;
	//优先定义预防公共复制,私有中不可调用 
	Queue(const Queue &q):qsize(0) {}
	Queue & operator=(const Queue & q){return * this;} 
public:
	Queue(int qs=Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item & item);   //入队 
	bool dequeue(Item & item);   //出队 
};

#endif 
