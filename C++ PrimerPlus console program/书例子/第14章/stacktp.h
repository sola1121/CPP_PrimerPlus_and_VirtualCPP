#ifndef STACKTP_H_
#define STACKTP_H_

template<typename Type>
class Stack{
	enum {MAX=10};
	Type items[MAX];   //holds stack items
	int top;   //index for top stack item
public:
	Stack();
	bool isempty();
	bool isfull();
	bool push(const Type & item);   //add item to stack
	bool pop(Type & item);   //pop top into item
};

template<typename Type>
Stack<Type>::Stack(){
	top=0;
}

template<typename Type>
bool Stack<Type>::isempty(){
	return top==0;
}

template<typename Type>
bool Stack<Type>::isfull(){
	return top==MAX;
}

template<typename Type>
bool Stack<Type>::push(const Type & item){    //º∆»Îitems 
	if (top<MAX){
		items[top++]=item;
		return true;
	}
	else
		return false;
}

template<typename Type>
bool Stack<Type>::pop(Type & item){    // ‰≥ˆitems 
	if (top>0){
		item=items[--top];
		return true;
	}
	else
		return false;
}

#endif
