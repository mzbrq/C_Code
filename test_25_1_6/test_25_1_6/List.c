#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

//初始化
void SLInit(SL* ps)
{
	
	ps->array = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

//展示
void SLPrint(SL* ps)
{
	assert(ps);

	int i = 0;

	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->array[i]);
	}

	printf("\n");
}

//增容
void SLCheckCapacity(SL* ps)
{
	assert(ps);

	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;

		SLDataType* tmp = (SLDataType*)realloc(ps->array, sizeof(newcapacity) * newcapacity);

		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}

		ps->array = tmp;
		ps->capacity = newcapacity;
	}
	
}

//头插
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);

	int end = ps->size;

	while (end)
	{
		ps->array[end] = ps->array[end - 1];

		end--;
	}

	ps->array[0] = x;
	ps->size++;

}

//尾插
void SLPushEnd(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);

	ps->array[ps->size] = x;
	ps->size++;

}

//头删
void SLPopFront(SL* ps)
{
	assert(ps);

	int i = 0;

	for (i = 0; i < ps->size-1; i++)
	{
		ps->array[i] = ps->array[i + 1];

	}

	ps->size--;
}

//尾删
void SLPopEnd(SL* ps)
{
	assert(ps);

	ps->size--;
}

//从指定位置插入
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);

	int end = ps->size;

	if (ps->size < pos)
	{
		printf("pos超出有效个数\n");
		return;
	}

	while (pos < end)
	{
		ps->array[end] = ps->array[end - 1];

		end--;
	}

	ps->array[pos] = x;
	ps->size++;
}


//从指定位置删除
void SLErase(SL* ps, int pos)
{
	assert(ps);

	if (pos > ps->size - 1)
	{
		printf("pos超出有效数据个数\n");
		exit(-1);
	}
	else
	{
		int i = 0;

		for (i = pos; i < ps->size-1; i++)
		{
			ps->array[i] = ps->array[i + 1];
			
		}

		ps->size--;
	}
}

//销毁
void SLDestory(SL* ps)
{
	assert(ps);

	free(ps->array);
	ps->capacity = 0;
	ps->size = 0;

	ps = NULL;
}


//修改
void SLModify(SL* ps, int pos, SLDataType x)
{
	assert(ps);

	ps->array[pos] = x;

}

//查找
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);

	int i = 0;

	while (i < ps->size)
	{
		if (ps->array[i] == x)
		{
			printf("找到了为%d\n", ps->array[i]);
			return i;
		}

		i++;
	}

	return -1;
}

