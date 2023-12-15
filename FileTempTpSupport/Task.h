#ifndef TASK_H
#define TASK_H
#include<iostream>
using namespace std;


class Task {
	private:
    int id;
    string taskName;
    int duration; // Temps nécessaire pour compléter la tâche (en millisecondes)
    
    public:
    Task(int,string,int );
    int getId();
    int getDuration();
    
};

#endif
