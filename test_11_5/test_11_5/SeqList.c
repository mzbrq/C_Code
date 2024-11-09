#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

//��ʼ��
void SeqListInit(SeqList* s1)
{
	memset(s1->array, 0, sizeof(SLDataType) * N);

	s1->size = 0;
}

//�������
void check_capacity(SeqList* s1)
{

}


//��ӡ
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


//ͷ��
void SeqListPushFront(SeqList* s1, SLDataType x)
{
	if (s1->size == N)
	{
		//����
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