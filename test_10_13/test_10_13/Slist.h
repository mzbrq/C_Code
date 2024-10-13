#define _CRT_SECURE_NO_WARNINGS 1

//头文件的包含
#include<stdio.h>

//定义
typedef int SLTDataType;


//结构体的申明

typedef struct SListNode
{
	SLTDataType val;
	SLTNode* next;
}SLTNode;

//函数的申明

//头插函数
void SLTNodePushFront(SLTNode** pphead, SLTDataType x);

//尾插函数
void SLTNodePushBack(SLTNode** pphead, SLTDataType x);

//打印函数
void SLTNodePrint(SLTNode* phead);
