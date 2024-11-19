#pragma once


// ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

//����
typedef int STDataType;

//�ṹ������
typedef struct stack
{
	STDataType* array;
	int top;
	int capacity;
}ST;

//�ӿں���


//��ʼ��
void StackInit(ST* ps);

//����
void StackDestory(ST* ps);

//ѹջ
void StackPush(ST* ps, STDataType x);

//��ջ
void StackPop(ST* ps);

//ջ������
STDataType StackTop(ST* ps);

//�п�
bool StackEmpty(ST* ps);

//��ѯ���ݸ���
int StackSize(ST* ps);

