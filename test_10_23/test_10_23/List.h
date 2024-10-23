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



//��ӡ
void DLTNodePrint(DLTNode* phead);

//��ʼ��
DLTNode* DLTNodeInit();

//����
DLTNode* DLTNodeFind(DLTNode* phead, ListDataType x);

//��posǰ�����ڵ�
void DLTNodeInsert(DLTNode* pos, ListDataType x);

//��posλ��ɾ���ڵ�
void DLTNodeErase(DLTNode* pos);

//���ٺ���
void DLTNodeDestory(DLTNode* phead);
	