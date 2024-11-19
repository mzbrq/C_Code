#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"


//����ʵ��


//��ʼ��
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

//����
void StackDestory(ST* ps)
{
	assert(ps);

	free(ps->array);
	ps->array = NULL;
	ps->top = ps->capacity = 0;

}


///ѹջ
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



//��ջ
void StackPop(ST* ps)
{
	assert(ps && ps->top > 0);

	ps->top--;
}


//ջ������
STDataType StackTop(ST* ps)
{
	assert(ps && ps->top > 0);

	return ps->array[ps->top - 1];
}


//�п�
bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}


//��ѯ���ݸ���
int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}