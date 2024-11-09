#pragma once

//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 100
typedef int SLDataType;

//结构体申明

//静态版本

typedef struct SeqList
{
	SLDataType array[N]; //定长数组
	size_t size; //有效数据的个数
}SeqList;



//函数申明

//初始化
void  SeqListInit(SeqList* s1);

//打印
void SeqListPrint(SeqList s1);

//头插
void SeqListPushFront(SeqList* s1, SLDataType x);

//尾插

//头删

//尾删
