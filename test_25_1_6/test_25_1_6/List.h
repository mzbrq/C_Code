#pragma once

//����

typedef int SLDataType;

//ͷ�ļ�����
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//�ṹ������

typedef struct SeqList
{
	SLDataType* array;
	int size; //˳�������Ч���ݵĸ���
	int capacity; //����
}SL;

//��������

//��ʼ��
void SLInit(SL* ps);

//չʾ
void SLPrint(SL* ps);

//����
void SLCheckCapacity(SL* ps);

//ͷ��
void SLPushFront(SL* ps, SLDataType x);

//β��
void SLPushEnd(SL* ps, SLDataType x);

//ͷɾ
void SLPopFront(SL* ps);

//βɾ
void SLPopEnd(SL* ps);

//��ָ��λ�ò���
void SLInsert(SL* ps, int pos, SLDataType x);

//��ָ��λ��ɾ��
void SLErase(SL* ps, int pos);

//����
void SLDestory(SL* ps);

//�޸�
void SLModify(SL* ps, int pos, SLDataType x);

//����
int SLFind(SL* ps, SLDataType x);