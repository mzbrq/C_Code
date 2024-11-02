#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int ListDataType;

typedef struct ListNode
{
	ListDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}DLTNode;


DLTNode* DLTNodeInit();

void DLTNodeDestory(DLTNode* phead);


void DLTNodePrint(DLTNode* phead);


void DLTNodePushBack(DLTNode* phead, ListDataType x);


void DLTNodePushFront(DLTNode* phead, ListDataType x);


void DLTNodePopBack(DLTNode* phead);


void DLTNodePopFront(DLTNode* phead);


DLTNode* DLTNodeFind(DLTNode* phead, ListDataType x);


void DLTNodeInsert(DLTNode* pos, ListDataType x);


void DLTNodeErase(DLTNode* pos);

