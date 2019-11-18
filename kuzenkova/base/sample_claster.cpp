#include <iostream>
#include "queue.h"
#include "tasks.h"
#include "cluster.h"

using namespace std;

int main()
{
	srand(time(NULL));
	int a;
	cluster b(60);
	b.doTacts(10);
	b.printStatistic();
	b.doTacts(5);
	b.printStatistic();
	cin >> a;
}