#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"


//��ӡ����
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

//β�庯��
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

	if (*pphead == NULL)// û�нڵ�
	{
		*pphead = newnode;
	}
	else//�нڵ�
	{
		//�ҵ�β�ڵ�
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//�����½ڵ�

		tail->next = newnode;
	}
}

//ͷ�庯��

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

	if (*pphead == NULL)// û�нڵ�
	{

		*pphead = newnode;
	}
	else//�нڵ�
	{
		newnode->next = *pphead;
		*pphead = newnode;
		
	}
}


//ͷɾ����
void SLTNodePopFront(SLTNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	
	*pphead = (*pphead)->next;
	
	
}


//βɾ����
void SLTNodePopBack(SLTNode** pphead)
{
	if (*pphead == NULL)//�޽ڵ�
	{
		return;
	}
	else if ((*pphead)->next == NULL)//ֻ��һ���ڵ�
	{
		*pphead = NULL;
	}
	else//���������Ͻڵ�
	{
		//�ҵ�β���ڵ�
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