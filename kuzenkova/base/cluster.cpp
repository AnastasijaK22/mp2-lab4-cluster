#include "cluster.h"

void cluster::doTacts(int tacts)
{
	for (int i = 0; i < tacts; i++)
	{
		if (rand() % 100 > rand() % 100)
		{
			Task temp;
			temp.setProcessors(processors);
			q.push(temp);
		}
		while ((!q.empty()) && (freeProcessors > 0))
		{
			Task temp = q.getBottom();
			if (temp.countProcessors <= freeProcessors)
			{
				performeTasks.AddNewTask(temp);
				q.pop();
				freeProcessors -= temp.countProcessors;
			}
		}

	}
}