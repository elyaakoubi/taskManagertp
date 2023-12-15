#include "Task.h"

 Task::Task(int i,string tn,int d):id(i),taskName(tn),duration(d){
 }
 
 int Task::getId(){
 	return id;
 }
 
 int Task::getDuration(){
 	return duration;
 }

