#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

//�����������
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

//��ʼ������

void SeqListInit(SL* s1)
{
	s1->a = (SQDateType*)calloc(MAX, sizeof(SQDateType));
	s1->size = 0;
	s1->capacity = MAX;

}

//�ڴ����ٺ���
void SeqListDestory(SL* s1)
{
	assert(s1);

	free(s1->a);
	s1->a = NULL;
	s1->size = s1->capacity = 0;
}


//չʾ����
void PrintSeqList(SL* s1)
{
	assert(s1);

	int i = 0;

	for (i = 0; i < s1->size; i++)
	{
		printf("%d\n", s1->a[i]);
	}
}




//ͷ�庯��

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

//β�庯��

void SeqListPushBack(SL* s1, SQDateType x)
{
	assert(s1);

	CheckSeqList(s1);

	s1->a[s1->size] = x;

	s1->size++;
}



//ͷɾ
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


//βɾ
void SeqListPopBack(SL* s1)
{
	assert(s1);

	s1->size--;
}


//��ָ��λ�ò���
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



//��ָ��λ��ɾ��
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

//���Һ���

int SeqListFind(SL* s1, SQDateType x)
{
	assert(s1);

	int i = 0;
	for (i = 0; i < s1->size; i++)
	{
		if (s1->a[i] == x)
		{
			printf("�ڵ�%dλ ", s1->a[i]);
		}
	}

	return -1;
}




//�޸ĺ���
void SeqListModify(SL* s1, int pos, SQDateType x)
{
	assert(s1);

	//�ж�
	if (s1->size == 0)
	{
		printf("��Ч����Ϊ��\n");
		return;
	}

	if (pos > s1->size)
	{
		printf("Ҫ�޸�λ�ó�����Ч����\n");
		return;
	}

	//�޸�
	s1->a[pos] = x;
}
