#ifndef TASK_H
#define TASK_H
#include<iostream>
using namespace std;


class Task {
	private:
    int id;
    string taskName;
    int duration; // Temps n�cessaire pour compl�ter la t�che (en millisecondes)
    
    public:
    Task(int,string,int );
    int getId();
    int getDuration();
    
};

#endif
