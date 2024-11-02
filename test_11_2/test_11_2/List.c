#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

DLTNode* DLTNodeInit()
{
	DLTNode* phead = (DLTNode*)malloc(sizeof(DLTNode));

	phead->next = phead;
	phead->prev = phead;

	return phead;

}

void DLTNodeDestory(DLTNode* phead)
{
	assert(phead);

	DLTNode* cur = phead->next;

	while (cur != phead)
	{
		DLTNode* next = cur->next;

		free(cur);

		cur = next;
	}

	free(phead);
	phead = NULL;
}


DLTNode* BuyDLTNode(ListDataType x)
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;

	return newnode;
}


void DLTNodePrint(DLTNode* phead)
{
	DLTNode* cur = phead->next;
	
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}

	printf("NULL\n");
}


void DLTNodePushBack(DLTNode* phead, ListDataType x)
{
	assert(phead);

	DLTNode* newnode = BuyDLTNode(x);
	DLTNode* tail = phead->prev;

	tail->next = newnode;
	newnode->prev = tail;

	phead->prev = newnode;
	newnode->next = phead;


}

void DLTNodePushFront(DLTNode* phead, ListDataType x)
{
	assert(phead);

	DLTNode* newnode = BuyDLTNode(x);
	DLTNode* next = phead->next;

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = next;
	next->prev = newnode;

}

void DLTNodePopBack(DLTNode* phead)
{
	assert(phead && phead->next != phead);


	DLTNode* tail = phead->prev;
	DLTNode* prev = tail->prev;

	phead->prev = prev;
	prev->next = phead;

	free(tail);
}


void DLTNodePopFront(DLTNode* phead)
{
	assert(phead && phead->next != phead);

	DLTNode* first = phead->next;
	DLTNode* newfirst = first->next;

	phead->next = newfirst;
	newfirst->prev = phead;

	free(first);
}


DLTNode* DLTNodeFind(DLTNode* phead, ListDataType x)
{

	assert(phead);
	DLTNode* cur = phead->next;

	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;

}


void DLTNodeInsert(DLTNode* pos, ListDataType x)
{
	DLTNode* newnode = BuyDLTNode(x);
	DLTNode* prev = pos->prev;

	newnode->prev = prev;
	prev->next = newnode;

	newnode->next = pos;
	pos->prev = newnode;

}


void DLTNodeErase(DLTNode* pos)
{
	DLTNode* prev = pos->prev;
	DLTNode* next = pos->next;

	prev->next = next;
	next->prev = prev;

	free(pos);
}