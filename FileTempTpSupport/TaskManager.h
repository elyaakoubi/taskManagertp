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
    // Ajouter une tâche à la file
    void addTask(Task* task);

    // Exécuter les tâches dans l'ordre d'arrivée
    void executeTasks();
};

#endif
