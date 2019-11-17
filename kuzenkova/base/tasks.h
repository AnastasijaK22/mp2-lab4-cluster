#ifndef __TASKS_H__
#define __TASKS_H__

#include <time.h>
#include <stdlib.h>
//#include <iostream>

int const MaxTime = 100;

class Task
{
	int Ptask;
	int Ttask;
	int runTime;
public:
	Task()
	{
		Ptask = 0;
		Ttask = 1 + rand() % MaxTime;
		runTime = 0;
	}
	void performeTact()
	{
		runTime++;
	}
	bool isPerformed() const
	{
		return Ttask == runTime;
	}
	bool operator<(const Task &t)
	{
		if ((Ttask - runTime) < (t.Ttask - t.runTime))
			return true;
		else return false;
	}
	void setProcessors(int processor_interval)
	{
		Ptask = 1 + rand() % processor_interval;
	}
	int countProcessors() const
	{
		return Ptask;
	}
	/*void print()
	{
		std::cout << Ptask << ' ' << Ttask << ' ' << runTime << ' '<<std::endl;
	}*/
};

struct Link
{
	Task data;
	Link *pNext;
};

class listTask
{
	Link *pFirst;
	int size;
public:
	listTask()
	{
		pFirst = nullptr;
		size = 0;
	}
	//void print();
	void AddNewTask(const Task &t);
	int DeletePerformedTask();
	void performe();
	int countTasks()
	{
		return size;
	}
	~listTask();
};
#endif