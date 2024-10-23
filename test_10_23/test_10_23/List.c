#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h";

//申请空间
DLTNode* BuyListNode(ListDataType x)
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;

	return newnode;
}

//初始化
DLTNode* DLTNodeInit()
{
	DLTNode* phead = (DLTNode*)malloc(sizeof(DLTNode));

	phead->next = phead;
	phead->prev = phead;

	return phead;
}

//打印
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

//查找
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



//从pos前面插入节点
void DLTNodeInsert(DLTNode* pos, ListDataType x)
{
	DLTNode* newnode = BuyListNode(x);

	DLTNode* prev = pos->prev;

	prev->next = newnode;
	newnode->prev = prev;

	newnode->next = pos;
	pos->prev = newnode;
	
}


//从pos删除节点
void DLTNodeErase(DLTNode* pos)
{
	DLTNode* prev = pos->prev;
	DLTNode* next = pos->next;

	prev->next = next;
	next->prev = prev;

	free(pos);
}


//销毁
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

