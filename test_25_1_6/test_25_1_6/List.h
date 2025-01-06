#pragma once

//定义

typedef int SLDataType;

//头文件包含
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//结构体申明

typedef struct SeqList
{
	SLDataType* array;
	int size; //顺序表中有效数据的个数
	int capacity; //容量
}SL;

//函数申明

//初始化
void SLInit(SL* ps);

//展示
void SLPrint(SL* ps);

//增容
void SLCheckCapacity(SL* ps);

//头插
void SLPushFront(SL* ps, SLDataType x);

//尾插
void SLPushEnd(SL* ps, SLDataType x);

//头删
void SLPopFront(SL* ps);

//尾删
void SLPopEnd(SL* ps);

//从指定位置插入
void SLInsert(SL* ps, int pos, SLDataType x);

//从指定位置删除
void SLErase(SL* ps, int pos);

//销毁
void SLDestory(SL* ps);

//修改
void SLModify(SL* ps, int pos, SLDataType x);

//查找
int SLFind(SL* ps, SLDataType x);