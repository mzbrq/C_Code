#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

//初始化
DLTNode* DLTNodeInit()
{
	DLTNode* phead = (DLTNode*)malloc(sizeof(DLTNode));

	phead->next = phead;
	phead->prev = phead;

	return phead;
}

//申请空间
DLTNode* BuyListNode(ListDataType x)
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));

	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;

}

//打印
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

//尾插
void ListNodePushBack(DLTNode* phead, ListDataType x)
{
	DLTNode* newnode = BuyListNode(x);

	//头指针前一个找到尾部节点
	DLTNode* tail = phead->prev;

	//尾部节点与新节点链接
	tail->next = newnode;
	newnode->prev = tail;

	//新节点与头节点链接
	newnode->next = phead;
	phead->prev = newnode;
}