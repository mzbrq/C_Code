#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"


//申请空间
static SLTNode* BuyListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//打印
void SLTNodePrint(SLTNode* phead)
{
	SLTNode* tail = phead;

	while (tail != NULL)
	{
		printf("%d->", tail->data);
		tail = tail->next;
	}

	printf("NULL\n");
}


//头插
void SLTNodePushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);
	
		newnode->next = *pphead;
		*pphead = newnode;
}


//尾插
void SLTNodePushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);

	if (*pphead == NULL)//无节点
	{
		*pphead = newnode;
	}
	else//y个以上节点
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
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//找到尾部节点与它的前一个
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;

		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}

		
		prev->next = NULL;
		free(tail);

	}

}



//查找
SLTNode* SLTNodeFind(SLTNode** pphead, SLTDataType x)
{

	SLTNode* find = *pphead;

	while (find != NULL)
	{
		if (find->data == x)
		{
			return find;
		}

		find = find->next;

	}

	return NULL;
}


//在pos位置的前面插入节点
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{

	if (pos == *pphead)
	{
		SLTNodePushFront(pphead, x);
	}
	else
	{
		SLTNode* newnode = BuyListNode(x);
		SLTNode* cur = *pphead;

		while (cur->next != pos)
		{

			cur = cur->next;
		}

		cur->next = newnode;
		newnode->next = pos;
	}

	
}


//在pos位置删除节点
void SListErase(SLTNode** pphead, SLTNode* pos)
{

	if (pos == *pphead)
	{
		//头删
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