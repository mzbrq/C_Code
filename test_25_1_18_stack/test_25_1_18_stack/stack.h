#pragma once

//ͷ�ļ�����
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//����
typedef int STDataType;

//�ṹ������

typedef struct Stack
{
	STDataType* a;
	int Top;
	int capacity;
}ST;


//��������

//��ʼ��
void StackInit(ST* ps);

//����
void StackDestory(ST* ps);

//ѹջ
void StackPush(ST* ps, STDataType x);

//��ջ
void StackPop(ST* ps);

//����ջ��Ԫ��
STDataType StackTop(ST* ps);

//�鿴ջԪ�ظ���
int StackSize(ST* ps);

//�п�
bool StackEmpty(ST* ps);

