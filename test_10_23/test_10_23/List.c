#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h";

//����ռ�
DLTNode* BuyListNode(ListDataType x)
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;

	return newnode;
}

//��ʼ��
DLTNode* DLTNodeInit()
{
	DLTNode* phead = (DLTNode*)malloc(sizeof(DLTNode));

	phead->next = phead;
	phead->prev = phead;

	return phead;
}

//��ӡ
void DLTNodePrint(DLTNode* phead)
{
	DLTNode* tail = phead->next;

	while (tail != phead)
	{
		printf("%d->", tail->data);

		tail = tail->next;
	}

	printf("NULL\n");
}

//����
DLTNode* DLTNodeFind(DLTNode* phead, ListDataType x)
{
	DLTNode* find = phead;

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



//��posǰ�����ڵ�
void DLTNodeInsert(DLTNode* pos, ListDataType x)
{
	DLTNode* newnode = BuyListNode(x);

	DLTNode* prev = pos->prev;

	prev->next = newnode;
	newnode->prev = prev;

	newnode->next = pos;
	pos->prev = newnode;
	
}


//��posɾ���ڵ�
void DLTNodeErase(DLTNode* pos)
{
	DLTNode* prev = pos->prev;
	DLTNode* next = pos->next;

	prev->next = next;
	next->prev = prev;

	free(pos);
}


//����
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

