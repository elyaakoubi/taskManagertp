#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"


template <typename T>
class MyQueue {
private:
    LinkedList<T>* list;

public:
	MyQueue();
    // Enfiler un élément à la fin de la file
    void enqueue(T* entity);
    // Défiler un élément du début de la file
    void dequeue();

    // Accéder au premier élément de la file
    T* front();
    // Vérifier si la file est vide
    bool isEmpty();

    // Obtenir la taille de la file
    int size();
};


#endif

