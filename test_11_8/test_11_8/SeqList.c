#define _CRT_SECURE_NO_WARNINGS 1


#include"SeqList.h"


//��ʼ��
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}


//����
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;

	ps->size = 0;
	ps->capacity = 0;

}


//����
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		printf("����\n");

		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newcapacity);

		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
			
		}
	}
}


//��ӡ
void SeqListPrint(SL* ps)
{
	int i = 0;

	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}

	printf("\n");

}


//ͷ��
void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);

	int end = ps->size - 1;

	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	ps->a[0] = x;
	ps->size++;
}


//β��
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;

}


//ͷɾ
void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);

	int start = 1;

	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}

	ps->size--;

}


//βɾ
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);

	ps->size--;
}


//����
int SeqListFind(SL* ps, SLDataType x)
{
	assert(ps->size > 0);

	int i = 0;

	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}

	return -1;
}



//���±�Ϊ pos ����������
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(pos <= ps->size);
	SeqListCheckCapacity(ps);

	int end = ps->size - 1;

	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	ps->a[pos] = x;
	ps->size++;

}


//�� pos ��ɾ������
void SeqListErase(SL* ps, int pos)
{
	assert(ps->size > 0 && pos < ps->size);

	int start = pos + 1;

	while (start <= ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}

	ps->size--;
}


//�޸��±� pos ������
void SeqListModify(SL* ps, int pos, SLDataType x)
{
	assert(ps->size > 0);

	ps->a[pos] = x;

}