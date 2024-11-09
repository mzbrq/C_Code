#pragma once

//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLDataType;


//�ṹ������
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;


//��ʼ��
void SeqListInit(SL* ps);

//����
void SeqListDestory(SL* ps);

//��ӡ
void SeqListPrint(SL* ps);

//ͷ��
void SeqListPushFront(SL* ps, SLDataType x);

//β��
void SeqListPushBack(SL* ps, SLDataType x);

//ͷɾ
void SeqListPopFront(SL* ps);

//βɾ
void SeqListPopBack(SL* ps);

//����(�ҵ������±꣬�Ҳ�������-1
int SeqListFind(SL* ps, SLDataType x);

//���±� pos λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x);

//�� pos ��ɾ������
void SeqListErase(SL* ps, int pos);

//�޸�
void SeqListModify(SL* ps, int pos, SLDataType x);