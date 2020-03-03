#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Item>
class QueueTP{
private:
	enum {Q_SIZE=10};
	
	//node is a nested class definition
	class Node{
	public:
		Item item;
		Node *next;
		Node(const Item & i): item(i), next(0){}		
	};
	
	Node* front;   //指向队前端的指针 
	Node* rear;   //指向队后端的指针 
	int items;   //当前的队长 
	const int qsize;    //队的总大小 
	
	QueueTP(const QueueTP & q) { qsize=0; }
	QueueTP & operator=(QueueTP & q){ return *this; }
	
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();
	bool isempty() const{ return items==0; }
	bool isfull() const { return items==qsize; }
	int queuecount() const { return items; }
	bool enqueue(const Item & item);
	bool dequeue(Item & item);
};

/*===================QueueTP的构造与析构===================*/
template <class Item>
QueueTP<Item>::QueueTP(int qs): qsize(qs){
	front = rear = 0;
	items = 0;
}

template <class Item>
QueueTP<Item>::~QueueTP(){
	Node * temp;
	while (front!=0){
		temp=front;
		front=front->next;
		delete temp;
	}
}

/*===========================后端加入队=============================*/
//add item to queue
template <class Item>
bool QueueTP<Item>::enqueue(const Item & item){
	if (isfull())
		return false;
	Node * add=new Node(item);
//on failure, new throws std::bad_alloc exception
	items++;
	if (front==0)
		front = add;
	else
		rear->next = add;
	rear=add;
	return true;
}
/*===========================前端离队===============================*/
//place front item into item variable and remove from queue
template <class Item>
bool QueueTP<Item>::dequeue(Item & item){
	if (front==0)
		return false;
	item = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if (items ==0 )
		rear=0;
	return true;
}


#endif
