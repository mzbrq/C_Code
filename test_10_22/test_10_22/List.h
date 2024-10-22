#pragma once

//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//����
typedef int ListDataType;

//�ṹ������
typedef struct DListNode
{
	ListDataType data;
	struct DListNode* prev;
	struct DListNode* next;
}DLTNode;

//��������


//��ʼ��
DLTNode* DLTNodeInit();


//��ӡ
void DLTNodePrint(DLTNode* phead);

//β��
void DLTNodePushBack(DLTNode* phead, ListDataType x);

//ͷ��
void DLTNodePushFront(DLTNode* phead, ListDataType x);

//βɾ
void DLTNodePopBack(DLTNode* phead);

//ͷɾ
void DLTNodePopFront(DLTNode* phead);

//����
DLTNode* DLTNodeFind(DLTNode* phead, ListDataType x);

//��pos֮ǰ����ڵ�
void DLTNodeInsert(DLTNode* phead, DLTNode* pos, ListDataType x);

//��posλ��ɾ���ڵ�
void DLTNodeErase(DLTNode* phead, DLTNode* pos);

