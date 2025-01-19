#pragma once

//头文件申明
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//定义
typedef int STDataType;

//结构体申明

typedef struct Stack
{
	STDataType* a;
	int Top;
	int capacity;
}ST;


//函数申明

//初始化
void StackInit(ST* ps);

//销毁
void StackDestory(ST* ps);

//压栈
void StackPush(ST* ps, STDataType x);

//出栈
void StackPop(ST* ps);

//返回栈顶元素
STDataType StackTop(ST* ps);

//查看栈元素个数
int StackSize(ST* ps);

//判空
bool StackEmpty(ST* ps);

