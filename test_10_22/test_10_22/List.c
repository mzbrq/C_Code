#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"


//申请空间
DLTNode* BuyDLTNode(ListDataType x)
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));

	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->data = x;

	return newnode;
}

//打印
void DLTNodePrint(DLTNode* phead)
{
	DLTNode* cur = phead->next;

	while (cur != phead)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}

	printf("NULL\n");

}


//初始化
DLTNode* DLTNodeInit()
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));

	newnode->prev = newnode;
	newnode->next = newnode;
	
	return newnode;
}



//尾插
void DLTNodePushBack(DLTNode* phead, ListDataType x)
{
	DLTNode* newnode = BuyDLTNode(x);

	DLTNode* tail = phead->prev;

	//双向
	tail->next = newnode;
	newnode->prev = tail;

	//循环
	newnode->next = phead;
	phead->prev = newnode;

}


//头插
void DLTNodePushFront(DLTNode* phead, ListDataType x)
{
	DLTNode* newnode = BuyDLTNode(x);

	DLTNode* next = phead->next;
	next->prev = newnode;
	newnode->next = next;

	phead->next = newnode;
	newnode->prev = phead;

}


//尾删
void DLTNodePopBack(DLTNode* phead)
{
	if ((phead)->next == phead)
	{
		return;
	}

	DLTNode* tail = phead->prev;
	DLTNode* prev = tail->prev;

	prev->next = phead;
	phead->prev = prev;

	free(tail);
}


//头删
void DLTNodePopFront(DLTNode* phead)
{
	/*if ((pphead)->next == pphead)
	{
		return;
	}*/

	assert(phead);

	DLTNode* head = (phead)->next;
	DLTNode* next = head->next;

	(phead)->next = next;
	next->prev = phead;

	free(head);
}


//查找
DLTNode* DLTNodeFind(DLTNode* phead, ListDataType x)
{
	assert(phead);

	DLTNode* find = phead->next;

	while (find != phead)
	{
		if (find->data == x)
		{
			return find;
		}

		find = find->next;
	}

	return NULL;
}


//从pos之前插入节点
void DLTNodeInsert(DLTNode* phead, DLTNode* pos, ListDataType x)
{
	assert(phead);
	assert(phead->next != phead);

	DLTNode* newnode = BuyDLTNode(x);

	DLTNode* find = phead->next;

	while (find != pos)
	{
		find = find->next;

	}

	DLTNode* prev = find->prev;

	prev->next = newnode;
	newnode->prev = prev;

	newnode->next = find;
	find->prev = newnode;


}



//从pos位置删除节点
void DLTNodeErase(DLTNode* pos)
{
	DLTNode* prev = pos->prev;
	DLTNode* next = pos->next;

	prev->next = next;
	next->prev = prev;

	free(pos);
}