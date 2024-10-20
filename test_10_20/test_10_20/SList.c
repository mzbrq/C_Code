#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"


//����ռ�
static SLTNode* BuyListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//��ӡ
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


//ͷ��
void SLTNodePushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);
	
		newnode->next = *pphead;
		*pphead = newnode;
}


//β��
void SLTNodePushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);

	if (*pphead == NULL)//�޽ڵ�
	{
		*pphead = newnode;
	}
	else//y�����Ͻڵ�
	{
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


//ͷɾ
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


//βɾ
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
		//�ҵ�β���ڵ�������ǰһ��
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



//����
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


//��posλ�õ�ǰ�����ڵ�
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


//��posλ��ɾ���ڵ�
void SListErase(SLTNode** pphead, SLTNode* pos)
{

	if (pos == *pphead)
	{
		//ͷɾ
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