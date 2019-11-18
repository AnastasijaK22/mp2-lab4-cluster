#include "tasks.h"

#include <gtest.h>

TEST(listTask, can_add_new_task_in_list)
{
	listTask l;
	Task temp;
	ASSERT_NO_THROW(l.AddNewTask(temp));
}