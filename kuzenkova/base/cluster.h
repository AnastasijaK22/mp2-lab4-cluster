#ifndef __CLUSTER_H__
#define __CLUSTER_H__

#include "queue.h"
#include "tasks.h"

class statistics
{
	int countPerformedTasks;
	int countQueueTasks;
	//double averageLoad;
public:
	statistics()
	{
		countPerformedTasks = 0;
		countPerformedTasks = 0;
	}
};

class cluster
{
	int processors;
	int freeProcessors;
	listTask performeTasks;
	statistics stat;
	TQueue <Task> q;
private:
	cluster(int pr):q(MaxQueueSize)
	{
		processors = pr;
		freeProcessors = pr;
	}
	void doTacts(int tacts);
};
#endif
