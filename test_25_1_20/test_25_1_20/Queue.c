#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"

//初始化
void QueueInit(Queue* pq)
{
	pq->head = pq->tail = NULL;
}

//销毁
void QueueDestory(Queue* pq)
{
	assert(pq);

	QNode* cur = pq->head;

	while (cur)
	{
		QNode* Next = cur->next;
		free(cur);
		cur = Next;
	}

	pq->head = pq->tail = NULL;

}

//申请节点
QNode* BuyQNode(QDataType x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));

	if (newnode == NULL)
	{
		printf("malloc fail!!!\n");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}


//进队列
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);

	QNode* newnode = BuyQNode(x); // 申请节点

	if (pq->head == NULL) // 队列无节点
	{
		pq->head = pq->tail = newnode;
	}
	else // 队列有节点
	{
		pq->tail->next = newnode; // 把newnode链接在尾节点的下一个
		pq->tail = newnode; // 再把newnode变为新的尾节点(tail)
	}


}


//出队列
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);

	if (pq->head->next == NULL) //队列只有一个节点
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else // 队列有多个节点
	{
		QNode* Next = pq->head->next; // 保存队头的下一个节点
		free(pq->head); // 释放队头节点
		pq->head = Next; // 对头的下一个节点成为新的队头
	}

}

//查看队头数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);

	return pq->head->data;


}

//查看队尾数据
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head);

	return pq->tail->data;
}

//判空
bool QueueEmpty(Queue* pq)
{
	assert(pq);

	if (pq->head == NULL)
	{
		return true;
	}

	return false;
}


//查看队列数据个数
int QueueSize(Queue* pq)
{
	assert(pq);
	
	int count = 0;
	QNode* cur = pq->head;

	while (cur)
	{
		cur = cur->next;
		count++;

	}

	return count;
}