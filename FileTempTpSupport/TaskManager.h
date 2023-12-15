#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include <windows.h> 
#include "Task.h"
#include "Queue.h"

class TaskManager {
private:
    MyQueue<Task>* taskQueue;
public:
	TaskManager();
    // Ajouter une t�che � la file
    void addTask(Task* task);

    // Ex�cuter les t�ches dans l'ordre d'arriv�e
    void executeTasks();
};

#endif
