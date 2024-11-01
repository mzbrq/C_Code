#pragma once


//头文件定义
#include<stdio.h>
#include<stdlib.h>


//typedef定义
typedef int ListDataType;


//结构体定义
typedef struct DListNode
{
	ListDataType data;
	struct DListNode* next;
	struct DListNode* prev;
}DLTNode;


//函数定义

//申请空间
DLTNode* BuyListNode(ListDataType x);

//初始化
DLTNode* DLTNodeInit();

//打印
void ListNodePrint(DLTNode* phead);

//尾插
void ListNodePushBack(DLTNode* phead, ListDataType x);