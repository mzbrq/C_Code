#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//打印

void SLTNodePrint(SLTNode* phead)
{
	SLTNode* cur = phead;

	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}

	printf("NULL\n");
}

//申请空间
SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}



//尾插
void SLTNodePushBack(SLTNode**  pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);

	if (*pphead == NULL)// 链表无节点
	{
		*pphead = newnode;
	}
	else// 链表有节点
	{
		//找到尾部节点

		SLTNode* tail = *pphead;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//链接新节点
		tail->next = newnode;

	}
	

}


//头插
void SLTNodePushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}



//头删
void SLTNodePopFront(SLTNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}

	
	SLTNode* next = (*pphead)->next;

	free(*pphead);

	*pphead = next;
}



//尾删
void SLTNodePopBack(SLTNode** pphead)
{
	if (*pphead == NULL)// 链表无节点
	{
		return;
	}
	else if ((*pphead)->next == NULL)// 链表有一个节点
	{
		free(*pphead);
		*pphead = NULL;
	}
	else// 链表有两个以上的节点
	{
		//找到尾部和它的上一个节点
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;

		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}

		//修改尾部上一个节点的next并释放尾部节点
		prev->next = NULL;
		free(tail);
	}
}


//查找
SLTNode* SLTNodeFind(SLTNode** pphead, SLTDataType x)
{
	SLTNode* pos = *pphead;

	while (pos != NULL)
	{
		if (pos->data == x)
		{
			return pos;
		}
		pos = pos->next;
	}

	return NULL;

}



//从pos上一个位置插入节点
void SLTNodeInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);

	if (pos == *pphead)// 头插
	{
		SLTNodePushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;

		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = newnode;
		newnode->next = pos;
	}

	
}



//从pos位置删除节点
void SLTNodeErase(SLTNode** pphead, SLTNode* pos)
{
	if (pos == *pphead)//头删
	{
		SLTNodePopFront(pphead);
	}
	else
	{
		SLTNode* cur = *pphead;

		while (cur->next != pos)
		{
			cur = cur->next;
		}

		cur->next = pos->next;
		free(pos);

	}
	
}