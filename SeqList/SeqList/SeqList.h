#pragma once

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>



#define MAX 10
typedef int SQDateType;


//����
typedef struct SeqList
{
	SQDateType* a;
	size_t size;
	size_t capacity;
}SL;



//��ʼ������

void SeqListInit(SL* s1);

//�ڴ����ٺ���
void SeqListDestory(SL* s1);


//�ж���������
void CheckSeqList(SL* s1);

//չʾ����
void PrintSeqList(SL* s1);

//�ӿ��κ���

//ͷ��
void SeqListPushFront(SL* s1, SQDateType x);

//β��
void SeqListPushBack(SL* s1, SQDateType x);

//ͷɾ
void SeqListPopFront(SL* s1);

//βɾ
void SeqListPopBack(SL* s1);


//��ָ��λ�ò���
void SeqListInsert(SL* s1, int pos , SQDateType x);

//ɾ��ָ��λ��
void SeqListErase(SL* s1, int pos);

//���Һ���
int SeqListFind(SL* s1, SQDateType x);

//�޸ĺ���
void SeqListModify(SL* s1, int pos, SQDateType x);


