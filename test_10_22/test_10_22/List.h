#pragma once

//头文件包含
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//定义
typedef int ListDataType;

//结构体申明
typedef struct DListNode
{
	ListDataType data;
	struct DListNode* prev;
	struct DListNode* next;
}DLTNode;

//函数申明


//初始化
DLTNode* DLTNodeInit();


//打印
void DLTNodePrint(DLTNode* phead);

//尾插
void DLTNodePushBack(DLTNode* phead, ListDataType x);

//头插
void DLTNodePushFront(DLTNode* phead, ListDataType x);

//尾删
void DLTNodePopBack(DLTNode* phead);

//头删
void DLTNodePopFront(DLTNode* phead);

//查找
DLTNode* DLTNodeFind(DLTNode* phead, ListDataType x);

//从pos之前插入节点
void DLTNodeInsert(DLTNode* phead, DLTNode* pos, ListDataType x);

//从pos位置删除节点
void DLTNodeErase(DLTNode* phead, DLTNode* pos);

