#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"


//打印函数
void SLTNodePrint(SLTNode* phead)
{
	SLTNode* cur = phead;

	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}

	printf("NULL");

}

//尾插函数
void SLTNodePushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("SLTNodePushBack");
		return;
	}

	newnode->data = x;
	newnode->next = NULL;

	if (*pphead == NULL)// 没有节点
	{
		*pphead = newnode;
	}
	else//有节点
	{
		//找到尾节点
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//链接新节点

		tail->next = newnode;
	}
}

//头插函数

void SLTNodePushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	if (newnode == NULL)
	{
		perror("SLTNodePushFront");
		return;
	}

	newnode->data = x;
	newnode->next = NULL;

	if (*pphead == NULL)// 没有节点
	{

		*pphead = newnode;
	}
	else//有节点
	{
		newnode->next = *pphead;
		*pphead = newnode;
		
	}
}


//头删函数
void SLTNodePopFront(SLTNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	
	*pphead = (*pphead)->next;
	
	
}


//尾删函数
void SLTNodePopBack(SLTNode** pphead)
{
	if (*pphead == NULL)//无节点
	{
		return;
	}
	else if ((*pphead)->next == NULL)//只有一个节点
	{
		*pphead = NULL;
	}
	else//有两个以上节点
	{
		//找到尾部节点
		SLTNode* tail1 = *pphead;
		SLTNode* tail2 = (*pphead)->next;

		while (tail2->next != NULL)
		{
			tail2 = tail2->next;
			tail1 = tail1->next;
		}
		tail1->next = NULL;
		free(tail2);
		tail2 = NULL;

		
	}
}