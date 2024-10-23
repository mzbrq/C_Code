#pragma once

//头文件申明
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



//打印
void DLTNodePrint(DLTNode* phead);

//初始化
DLTNode* DLTNodeInit();

//查找
DLTNode* DLTNodeFind(DLTNode* phead, ListDataType x);

//从pos前面插入节点
void DLTNodeInsert(DLTNode* pos, ListDataType x);

//从pos位置删除节点
void DLTNodeErase(DLTNode* pos);

//销毁函数
void DLTNodeDestory(DLTNode* phead);
	