#pragma once

//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 100
typedef int SLDataType;

//�ṹ������

//��̬�汾

typedef struct SeqList
{
	SLDataType array[N]; //��������
	size_t size; //��Ч���ݵĸ���
}SeqList;



//��������

//��ʼ��
void  SeqListInit(SeqList* s1);

//��ӡ
void SeqListPrint(SeqList s1);

//ͷ��
void SeqListPushFront(SeqList* s1, SLDataType x);

//β��

//ͷɾ

//βɾ
