#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

template<typename T>
class Node
{
	private:
		T* entity;
		Node<T>* next;
	public:
		Node(T*);
		~Node();
		T* getEntity();
		Node<T>* getNext();		
		void setNext(Node<T>*);

};

template<typename T>
Node<T>::Node(T* e){
	entity=e;
	next=NULL;
}
	
template<typename T>
Node<T>::~Node(){
	delete entity;
}

template<typename T>
void Node<T>::setNext(Node<T>* next){
	this->next=next;
}

template<typename T>
T* Node<T>::getEntity(){
	return entity;
}

template<typename T>
Node<T>* Node<T>::getNext(){
	return next;
}

#endif


