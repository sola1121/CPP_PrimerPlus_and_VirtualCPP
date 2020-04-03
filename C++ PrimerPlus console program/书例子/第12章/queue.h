#ifndef QUEUE_H_
#define QUEUE_H_

class Customer{
private:
//�е���ʱ��ͼӹ�ʱ�� 
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
	//node(�ڵ�) is a nested(��Ƕ) structure definition local to this c
	struct Node{ Item item; struct Node * next;};  //����Customer�� 
	enum {Q_SIZE=10};
//private class members
	Node *front;
	Node *rear;
	int items;
	const int qsize;
	//���ȶ���Ԥ����������,˽���в��ɵ��� 
	Queue(const Queue &q):qsize(0) {}
	Queue & operator=(const Queue & q){return * this;} 
public:
	Queue(int qs=Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item & item);   //��� 
	bool dequeue(Item & item);   //���� 
};

#endif 
