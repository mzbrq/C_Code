#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"

//��ʼ��
void QueueInit(Queue* pq)
{
	pq->head = pq->tail = NULL;
}

//����
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

//����ڵ�
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


//������
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);

	QNode* newnode = BuyQNode(x); // ����ڵ�

	if (pq->head == NULL) // �����޽ڵ�
	{
		pq->head = pq->tail = newnode;
	}
	else // �����нڵ�
	{
		pq->tail->next = newnode; // ��newnode������β�ڵ����һ��
		pq->tail = newnode; // �ٰ�newnode��Ϊ�µ�β�ڵ�(tail)
	}


}


//������
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);

	if (pq->head->next == NULL) //����ֻ��һ���ڵ�
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else // �����ж���ڵ�
	{
		QNode* Next = pq->head->next; // �����ͷ����һ���ڵ�
		free(pq->head); // �ͷŶ�ͷ�ڵ�
		pq->head = Next; // ��ͷ����һ���ڵ��Ϊ�µĶ�ͷ
	}

}

//�鿴��ͷ����
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);

	return pq->head->data;


}

//�鿴��β����
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head);

	return pq->tail->data;
}

//�п�
bool QueueEmpty(Queue* pq)
{
	assert(pq);

	if (pq->head == NULL)
	{
		return true;
	}

	return false;
}


//�鿴�������ݸ���
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