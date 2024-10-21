#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//��ӡ

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

//����ռ�
SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}



//β��
void SLTNodePushBack(SLTNode**  pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);

	if (*pphead == NULL)// �����޽ڵ�
	{
		*pphead = newnode;
	}
	else// �����нڵ�
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


//ͷ��
void SLTNodePushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
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
	if (*pphead == NULL)// �����޽ڵ�
	{
		return;
	}
	else if ((*pphead)->next == NULL)// ������һ���ڵ�
	{
		free(*pphead);
		*pphead = NULL;
	}
	else// �������������ϵĽڵ�
	{
		//�ҵ�β����������һ���ڵ�
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;

		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}

		//�޸�β����һ���ڵ��next���ͷ�β���ڵ�
		prev->next = NULL;
		free(tail);
	}
}


//����
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



//��pos��һ��λ�ò���ڵ�
void SLTNodeInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);

	if (pos == *pphead)// ͷ��
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



//��posλ��ɾ���ڵ�
void SLTNodeErase(SLTNode** pphead, SLTNode* pos)
{
	if (pos == *pphead)//ͷɾ
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