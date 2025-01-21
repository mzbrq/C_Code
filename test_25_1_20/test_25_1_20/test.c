#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"

void QueueTest1()
{
	Queue q1;
	QueueInit(&q1);

	QueuePush(&q1, 1);
	QueuePush(&q1, 2);
	QueuePush(&q1, 4);
	QueuePush(&q1, 5);

	
	while (!QueueEmpty(&q1))
	{
		printf("%d\n", QueueFront(&q1));

		QueuePop(&q1);
	}
	

	QueueDestory(&q1);

}

int main()
{
	QueueTest1();

	return 0;
}