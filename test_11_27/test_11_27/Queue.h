#pragma once

///ͷ�ļ�����

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//����
typedef int QDataType;

//�ṹ������

typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;


//�ӿں���



//��ʼ��
void QueueInit(Queue* pq);

//���ٶ���
void QueueDestory(Queue* pq);

//������
void QueuePush(Queue* pq, QDataType x);

//������
void QueuePop(Queue* pq);

//�鿴��ͷ����
QDataType QueueFront(Queue* pq);

//�鿴��β����
QDataType QueueEnd(Queue* pq);

//���и���
int QueueSize(Queue* pq);

//�п�
bool QueueEmpty(Queue* pq);



