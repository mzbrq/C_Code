#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

//检查容量函数
void CheckSeqList(SL* s1)
{
	if (s1->size < s1->capacity)
	{
		return;
	}
	else
	{
		SQDateType* tmp = (SQDateType*)realloc(s1->a, (s1->capacity) * 2 * sizeof(SQDateType));
		if (tmp == NULL)
		{
			perror("CheckSeqList");
			return;
		}

		s1->a = tmp;

		s1->capacity *= 2;
	}
}

//初始化函数

void SeqListInit(SL* s1)
{
	s1->a = (SQDateType*)calloc(MAX, sizeof(SQDateType));
	s1->size = 0;
	s1->capacity = MAX;

}

//内存销毁函数
void SeqListDestory(SL* s1)
{
	assert(s1);

	free(s1->a);
	s1->a = NULL;
	s1->size = s1->capacity = 0;
}


//展示函数
void PrintSeqList(SL* s1)
{
	assert(s1);

	int i = 0;

	for (i = 0; i < s1->size; i++)
	{
		printf("%d\n", s1->a[i]);
	}
}




//头插函数

void SeqListPushFront(SL* s1, SQDateType x)
{
	assert(s1);

	CheckSeqList(s1);

	int end = s1->size-1;

	while (end >= 0)
	{
		s1->a[end+1] = s1->a[end];

		end--;
	}

	s1->a[0] = x;

	s1->size++;

}

//尾插函数

void SeqListPushBack(SL* s1, SQDateType x)
{
	assert(s1);

	CheckSeqList(s1);

	s1->a[s1->size] = x;

	s1->size++;
}



//头删
void SeqListPopFront(SL* s1)
{
	assert(s1);

	int i = 0;

	for (i = 0; i < s1->size-1; i++)
	{
		s1->a[i] = s1->a[i + 1];
	}

	s1->size--;
}


//尾删
void SeqListPopBack(SL* s1)
{
	assert(s1);

	s1->size--;
}


//从指定位置插入
void SeqListInsert(SL* s1, int pos, SQDateType x)
{
	assert(s1);

	int end = s1->size;
	while (end > pos)
	{
		s1->a[end] = s1->a[end - 1];
		end--;
	}

	s1->a[pos] = x;
	s1->size++;

}



//从指定位置删除
void SeqListErase(SL* s1, int pos)
{
	assert(s1);

	while (s1->size-1 > pos)
	{
		s1->a[pos] = s1->a[pos + 1];
		pos++;
	}

	s1->size--;
}

//查找函数

int SeqListFind(SL* s1, SQDateType x)
{
	assert(s1);

	int i = 0;
	for (i = 0; i < s1->size; i++)
	{
		if (s1->a[i] == x)
		{
			printf("在第%d位 ", s1->a[i]);
		}
	}

	return -1;
}




//修改函数
void SeqListModify(SL* s1, int pos, SQDateType x)
{
	assert(s1);

	//判断
	if (s1->size == 0)
	{
		printf("有效个数为空\n");
		return;
	}

	if (pos > s1->size)
	{
		printf("要修改位置超出有效个数\n");
		return;
	}

	//修改
	s1->a[pos] = x;
}
