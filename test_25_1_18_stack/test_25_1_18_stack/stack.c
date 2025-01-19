#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"

//初始化
void StackInit(ST* ps)
{
	assert(ps);
	
	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * 3);

	if (tmp == NULL)
	{
		printf("malloc fail!\n");
		exit(-1);
	}

	ps->a = tmp;
	ps->Top = 0;
	ps->capacity = 3;
}


//增容
void AddCapacity(ST* ps)
{
	assert(ps);

	STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * 2 * ps->capacity);

	if (tmp == NULL)
	{
		printf("realloc fail!\n");
		exit(-1);
	}

	ps->a = tmp;
	ps->capacity *= 2;
}

//销毁
void StackDestory(ST* ps)
{
	assert(ps);

	free(ps->a);

	ps->a = NULL;
	ps->capacity = 0;
	ps->Top = 0;

	ps = NULL;

}


//压栈
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	
	if (ps->capacity == ps->Top)
	{
		//增容
		AddCapacity(ps);
	}
	ps->a[ps->Top] = x;

	ps->Top++;
}


//出栈
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->Top > 0);

	ps->Top--;
}


//返回栈顶元素
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->Top > 0);

	return ps->a[ps->Top - 1];
}

//查看栈的元素个数
int StackSize(ST* ps)
{
	assert(ps);
	
	return ps->Top;
}


//判空
bool StackEmpty(ST* ps)
{
	assert(ps);

	if (ps->Top == 0)
	{
		return true;
	}

	return false;
}