#pragma once

//ͷ�ļ�����

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

//����
typedef int SLTDataType;

//�ṹ������

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;


//��������




//��ӡ����
void SLTNodePrint(SLTNode* phead);

//β�庯��
void SLTNodePushBack(SLTNode** pphead, SLTDataType x);

//ͷ�庯��
void SLTNodePushFront(SLTNode** pphead, SLTDataType x);

//ͷɾ����
void SLTNodePopFront(SLTNode** pphead);

//βɾ����
void SLTNodePopBack(SLTNode** pphead);