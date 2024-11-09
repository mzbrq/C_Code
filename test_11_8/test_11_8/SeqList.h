#pragma once

//头文件包含
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLDataType;


//结构体申明
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;


//初始化
void SeqListInit(SL* ps);

//销毁
void SeqListDestory(SL* ps);

//打印
void SeqListPrint(SL* ps);

//头插
void SeqListPushFront(SL* ps, SLDataType x);

//尾插
void SeqListPushBack(SL* ps, SLDataType x);

//头删
void SeqListPopFront(SL* ps);

//尾删
void SeqListPopBack(SL* ps);

//查找(找到返回下标，找不到返回-1
int SeqListFind(SL* ps, SLDataType x);

//从下标 pos 位置插入
void SeqListInsert(SL* ps, int pos, SLDataType x);

//从 pos 处删除数据
void SeqListErase(SL* ps, int pos);

//修改
void SeqListModify(SL* ps, int pos, SLDataType x);