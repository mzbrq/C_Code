#define _CRT_SECURE_NO_WARNINGS 1

#include"Slist.h"

//��ӡ����
void SLTNodePrint(SLTNode* phead)
{
	SLTNode* tail = phead;

	while (tail != NULL)
	{
		printf("%d ", tail->x);
		tail = tail->next;
	}

}

//ͷ�庯��
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

//β�庯��
void SLTNodePushBack(SLTNode** pphead, SLTDataType x)
{
	//�ж��Ƿ��нڵ�
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

		//�ҵ�β���ڵ�
		SLTNode* tail = *pphead;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//�����½ڵ�
		tail->next = newnode;

	}
}