#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"

void TestQueue()
{
	Queue pq;
	QueueInit(&pq);


	QueuePush(&pq, 1);
	QueuePush(&pq, 2);
	QueuePush(&pq, 3);
	QueuePush(&pq, 4);

	QueuePop(&pq);
	QueuePop(&pq);
	QueuePop(&pq);
	QueuePop(&pq);


	QueuePush(&pq, 5);
	QueuePush(&pq, 6);
	QueuePush(&pq, 7);
	QueuePush(&pq, 8);

	QueueDestory(&pq);
	

}

void TestQueue2()
{
	Queue pq;
	QueueInit(&pq);


	QueuePush(&pq, 1);
	QueuePush(&pq, 2);
	QueuePush(&pq, 3);
	QueuePush(&pq, 4);

	while (!QueueEmpty(&pq))
	{
		
		printf("%d ", QueueFront(&pq));
		QueuePop(&pq);

	}

	QueueDestory(&pq);

}

int main()
{
	//TestQueue1();
	TestQueue2();

	return 0;
}