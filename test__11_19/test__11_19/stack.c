#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"


//函数实现


//初始化
void StackInit(ST* ps)
{
	assert(ps);
	
	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	else
	{
		ps->array = tmp;
		ps->capacity = 4;
		ps->top = 0;
	}
}

//销毁
void StackDestory(ST* ps)
{
	assert(ps);

	free(ps->array);
	ps->array = NULL;
	ps->top = ps->capacity = 0;

}


///压栈
void StackPush(ST* ps, STDataType x)
{
	assert(ps);

	if (ps->capacity == ps->top)
	{
		STDataType* tmp = (STDataType*)realloc(ps->array, sizeof(STDataType) * 2 * ps->capacity);

		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->array = tmp;
			ps->capacity *= 2;
		}

	}

	ps->array[ps->top] = x;
	ps->top++;
}



//出栈
void StackPop(ST* ps)
{
	assert(ps && ps->top > 0);

	ps->top--;
}


//栈顶数据
STDataType StackTop(ST* ps)
{
	assert(ps && ps->top > 0);

	return ps->array[ps->top - 1];
}


//判空
bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}


//查询数据个数
int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}