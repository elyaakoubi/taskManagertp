#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"


template <typename T>
class MyQueue {
private:
    LinkedList<T>* list;

public:
	MyQueue();
    // Enfiler un �l�ment � la fin de la file
    void enqueue(T* entity);
    // D�filer un �l�ment du d�but de la file
    void dequeue();

    // Acc�der au premier �l�ment de la file
    T* front();
    // V�rifier si la file est vide
    bool isEmpty();

    // Obtenir la taille de la file
    int size();
};


#endif

