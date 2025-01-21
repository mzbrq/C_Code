#pragma once

//ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


//����
typedef int QDataType;

//�ṹ������

typedef struct QueueNode
{
	QDataType data; // �������
	struct QueueNode* next; // �����һ���ڵ��ָ��
}QNode;

typedef struct Queue
{
	QNode* head; // ��Ŷ�ͷ��ַ
	QNode* tail; // ��Ŷ�β��ַ
}Queue;


//�ӿں���

//��ʼ��
void QueueInit(Queue* pq);

//����
void QueueDestory(Queue* pq);

//������
void QueuePush(Queue* pq, QDataType x);

//������
void QueuePop(Queue* pq);

//�鿴��ͷ����
QDataType QueueFront(Queue* pq);

//�鿴��β����
QDataType QueueBack(Queue* pq);

//�п�
bool QueueEmpty(Queue* pq);

//�鿴�������ݸ���
int QueueSize(Queue* pq);
