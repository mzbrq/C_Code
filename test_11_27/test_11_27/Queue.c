#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"

//初始化
void QueueInit(Queue* pq)
{
	assert(pq);

	pq->head = pq->tail = NULL;


}

//销毁
void QueueDestory(Queue* pq)
{
	assert(pq);

	QNode* Cur = pq->head;

	while (Cur)
	{
		QNode* next = Cur->next;
		
		free(Cur);

		Cur = next;

	}

	pq->head = pq->tail = NULL;
}


//进队列
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);

	QNode* newnode = (QNode*)malloc(sizeof(QNode));

	if (newnode == NULL)
	{
		printf("malloc fial\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;

		if (pq->head == NULL)
		{
			pq->head = pq->tail = newnode;
		}
		else
		{
			pq->tail->next = newnode;
			pq->tail = pq->tail->next;
		}

	}
}


//出队列
void QueuePop(Queue* pq)
{
	assert(pq && pq->head);

	QNode* newhead = pq->head->next;

	if (pq->head->next == NULL) // 只有一个节点
	{
		free(pq->head);
		pq->tail = NULL;
	}
	else
	{
		free(pq->head);
	}

	pq->head = newhead;

}



//查看队头数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);

	return pq->head->data;
}

//查看队尾数据
QDataType QueueEnd(Queue* pq)
{
	assert(pq);

	return pq->tail->data;
}



//查看队列数据个数
int QueueSize(Queue* pq)
{
	assert(pq && pq->head);

	QNode* cur = pq->head;
	int size = 0;

	while (cur != NULL)
	{
		size++;
		cur = cur->next;
	}

	return size;
}


//判空
bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->head == NULL;
}