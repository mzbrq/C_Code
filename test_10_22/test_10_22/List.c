#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"


//����ռ�
DLTNode* BuyDLTNode(ListDataType x)
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));

	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->data = x;

	return newnode;
}

//��ӡ
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


//��ʼ��
DLTNode* DLTNodeInit()
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));

	newnode->prev = newnode;
	newnode->next = newnode;
	
	return newnode;
}



//β��
void DLTNodePushBack(DLTNode* phead, ListDataType x)
{
	DLTNode* newnode = BuyDLTNode(x);

	DLTNode* tail = phead->prev;

	//˫��
	tail->next = newnode;
	newnode->prev = tail;

	//ѭ��
	newnode->next = phead;
	phead->prev = newnode;

}


//ͷ��
void DLTNodePushFront(DLTNode* phead, ListDataType x)
{
	DLTNode* newnode = BuyDLTNode(x);

	DLTNode* next = phead->next;
	next->prev = newnode;
	newnode->next = next;

	phead->next = newnode;
	newnode->prev = phead;

}


//βɾ
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


//ͷɾ
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


//����
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


//��pos֮ǰ����ڵ�
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



//��posλ��ɾ���ڵ�
void DLTNodeErase(DLTNode* pos)
{
	DLTNode* prev = pos->prev;
	DLTNode* next = pos->next;

	prev->next = next;
	next->prev = prev;

	free(pos);
}