#pragma once

//头文件包含
#include<stdio.h>
#include<stdlib.h>

//定义
typedef int SLTDataType;

//结构体申明
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;


//函数申明



//打印
void SLTNodePrint(SLTNode* phead);

//头插
void SLTNodePushFront(SLTNode** pphead, SLTDataType x);

//尾插
void SLTNodePushBack(SLTNode** pphead, SLTDataType x);

//头删
void SLTNodePopFront(SLTNode** pphead);

//尾删
void SLTNodePopBack(SLTNode** pphead);

//查找
SLTNode* SLTNodeFind(SLTNode** pphead, SLTDataType x);

//在pos位置的前面插入节点
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//在pos位置删除节点
void SListErase(SLTNode** pphead, SLTNode* ppos);
