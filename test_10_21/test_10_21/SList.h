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

//β��
void SLTNodePushBack(SLTNode**  pphead, SLTDataType x);

//ͷ��
void SLTNodePushFront(SLTNode** pphead, SLTDataType x);

//ͷɾ
void SLTNodePopFront(SLTNode** pphead);

//βɾ
void SLTNodePopBack(SLTNode** pphead);

//����
SLTNode* SLTNodeFind(SLTNode** pphead, SLTDataType x);

//��posλ��ǰһ������ڵ�
void SLTNodeInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//��posλ��ɾ���ڵ�
void SLTNodeErase(SLTNode** pphead, SLTNode* pos);

