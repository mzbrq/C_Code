#pragma once


//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>


//typedef����
typedef int ListDataType;


//�ṹ�嶨��
typedef struct DListNode
{
	ListDataType data;
	struct DListNode* next;
	struct DListNode* prev;
}DLTNode;


//��������

//����ռ�
DLTNode* BuyListNode(ListDataType x);

//��ʼ��
DLTNode* DLTNodeInit();

//��ӡ
void ListNodePrint(DLTNode* phead);

//β��
void ListNodePushBack(DLTNode* phead, ListDataType x);