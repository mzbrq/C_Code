#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

//��ʼ��
DLTNode* DLTNodeInit()
{
	DLTNode* phead = (DLTNode*)malloc(sizeof(DLTNode));

	phead->next = phead;
	phead->prev = phead;

	return phead;
}

//����ռ�
DLTNode* BuyListNode(ListDataType x)
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));

	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;

}

//��ӡ
void ListNodePrint(DLTNode* phead)
{
	DLTNode* cur = phead->next;

	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}

	printf("NULL\n");
	
}

//β��
void ListNodePushBack(DLTNode* phead, ListDataType x)
{
	DLTNode* newnode = BuyListNode(x);

	//ͷָ��ǰһ���ҵ�β���ڵ�
	DLTNode* tail = phead->prev;

	//β���ڵ����½ڵ�����
	tail->next = newnode;
	newnode->prev = tail;

	//�½ڵ���ͷ�ڵ�����
	newnode->next = phead;
	phead->prev = newnode;
}