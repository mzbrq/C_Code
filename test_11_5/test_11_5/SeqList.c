#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

//初始化
void SeqListInit(SeqList* s1)
{
	memset(s1->array, 0, sizeof(SLDataType) * N);

	s1->size = 0;
}

//检查容量
void check_capacity(SeqList* s1)
{

}


//打印
void SeqListPrint(SeqList s1)
{
	if (s1.size == 0)
	{
		printf("NULL\n");
	}

	int i = 0;

	for (i = 0; i < s1.size; i++)
	{
		printf("%d ", s1.array[i]);
	}
}


//头插
void SeqListPushFront(SeqList* s1, SLDataType x)
{
	if (s1->size == N)
	{
		//扩容
		check_capacity(s1);
	}

	if (s1->size == 0)
	{
		s1->array[0] = x;
	}
	else
	{
		int i = s1->size - 1;

		while (i != 0)
		{
			s1->array[i + 1] = s1->array[i];
			i--;
		}

		s1->array[i + 1] = s1->array[i];
		s1->array[i] = x;
	}

	s1->size++;
}