#define _CRT_SECURE_NO_WARNINGS 1

#include"Slist.h"

//打印函数
void SLTNodePrint(SLTNode* phead)
{
	SLTNode* tail = phead;

	while (tail != NULL)
	{
		printf("%d ", tail->x);
		tail = tail->next;
	}

}

//头插函数
void SLTNodePushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = NULL;
	
	if (pphead == NULL)
	{
		newnode = 

		
	}
	else
	{
		
		
		newnode->next = *pphead;

	}
}

//尾插函数
void SLTNodePushBack(SLTNode** pphead, SLTDataType x)
{
	//判断是否有节点
	if (*pphead == NULL)
	{
		(*pphead)->val = x;
		(*pphead)->next = NULL;
	}
	else
	{
		SLTNode* newnode = NULL;
		newnode->val = x;
		newnode->next = NULL;

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