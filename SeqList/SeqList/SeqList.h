#pragma once

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>



#define MAX 10
typedef int SQDateType;


//创建
typedef struct SeqList
{
	SQDateType* a;
	size_t size;
	size_t capacity;
}SL;



//初始化函数

void SeqListInit(SL* s1);

//内存销毁函数
void SeqListDestory(SL* s1);


//判断容量函数
void CheckSeqList(SL* s1);

//展示函数
void PrintSeqList(SL* s1);

//接口形函数

//头插
void SeqListPushFront(SL* s1, SQDateType x);

//尾插
void SeqListPushBack(SL* s1, SQDateType x);

//头删
void SeqListPopFront(SL* s1);

//尾删
void SeqListPopBack(SL* s1);


//从指定位置插入
void SeqListInsert(SL* s1, int pos , SQDateType x);

//删除指定位置
void SeqListErase(SL* s1, int pos);

//查找函数
int SeqListFind(SL* s1, SQDateType x);

//修改函数
void SeqListModify(SL* s1, int pos, SQDateType x);


