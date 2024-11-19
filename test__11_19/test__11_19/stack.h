#pragma once


// 头文件包含
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

//定义
typedef int STDataType;

//结构体申明
typedef struct stack
{
	STDataType* array;
	int top;
	int capacity;
}ST;

//接口函数


//初始化
void StackInit(ST* ps);

//销毁
void StackDestory(ST* ps);

//压栈
void StackPush(ST* ps, STDataType x);

//出栈
void StackPop(ST* ps);

//栈顶数据
STDataType StackTop(ST* ps);

//判空
bool StackEmpty(ST* ps);

//查询数据个数
int StackSize(ST* ps);

