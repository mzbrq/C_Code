#pragma once

//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>

//����
typedef int SLTDataType;

//�ṹ������
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;


//��������



//��ӡ
void SLTNodePrint(SLTNode* phead);

//ͷ��
void SLTNodePushFront(SLTNode** pphead, SLTDataType x);

//β��
void SLTNodePushBack(SLTNode** pphead, SLTDataType x);

//ͷɾ
void SLTNodePopFront(SLTNode** pphead);

//βɾ
void SLTNodePopBack(SLTNode** pphead);

//����
SLTNode* SLTNodeFind(SLTNode** pphead, SLTDataType x);

//��posλ�õ�ǰ�����ڵ�
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//��posλ��ɾ���ڵ�
void SListErase(SLTNode** pphead, SLTNode* ppos);
