#define _CRT_SECURE_NO_WARNINGS 1

//ͷ�ļ��İ���
#include<stdio.h>

//����
typedef int SLTDataType;


//�ṹ�������

typedef struct SListNode
{
	SLTDataType val;
	SLTNode* next;
}SLTNode;

//����������

//ͷ�庯��
void SLTNodePushFront(SLTNode** pphead, SLTDataType x);

//β�庯��
void SLTNodePushBack(SLTNode** pphead, SLTDataType x);

//��ӡ����
void SLTNodePrint(SLTNode* phead);
