#pragma once

//头文件申明

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

//定义
typedef int SLTDataType;

//结构体申明

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;


//函数申明




//打印函数
void SLTNodePrint(SLTNode* phead);

//尾插函数
void SLTNodePushBack(SLTNode** pphead, SLTDataType x);

//头插函数
void SLTNodePushFront(SLTNode** pphead, SLTDataType x);

//头删函数
void SLTNodePopFront(SLTNode** pphead);

//尾删函数
void SLTNodePopBack(SLTNode** pphead);