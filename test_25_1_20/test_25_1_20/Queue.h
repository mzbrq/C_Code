#pragma once

//头文件
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


//定义
typedef int QDataType;

//结构体申明

typedef struct QueueNode
{
	QDataType data; // 存放数据
	struct QueueNode* next; // 存放下一个节点的指针
}QNode;

typedef struct Queue
{
	QNode* head; // 存放队头地址
	QNode* tail; // 存放队尾地址
}Queue;


//接口函数

//初始化
void QueueInit(Queue* pq);

//销毁
void QueueDestory(Queue* pq);

//进队列
void QueuePush(Queue* pq, QDataType x);

//出队列
void QueuePop(Queue* pq);

//查看队头数据
QDataType QueueFront(Queue* pq);

//查看队尾数据
QDataType QueueBack(Queue* pq);

//判空
bool QueueEmpty(Queue* pq);

//查看队列数据个数
int QueueSize(Queue* pq);
