#pragma once

///头文件包含

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//定义
typedef int QDataType;

//结构体申明

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


//接口函数



//初始化
void QueueInit(Queue* pq);

//销毁队列
void QueueDestory(Queue* pq);

//进队列
void QueuePush(Queue* pq, QDataType x);

//出队列
void QueuePop(Queue* pq);

//查看队头数据
QDataType QueueFront(Queue* pq);

//查看队尾数据
QDataType QueueEnd(Queue* pq);

//队列个数
int QueueSize(Queue* pq);

//判空
bool QueueEmpty(Queue* pq);



