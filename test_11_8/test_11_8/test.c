#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void TestSQList1()
{
	SL ps;

	SeqListInit(&ps);

	SeqListPushFront(&ps, 1);
	SeqListPushFront(&ps, 2);
	SeqListPushFront(&ps, 3);
	SeqListPushFront(&ps, 4);

	SeqListPrint(&ps);

	SeqListPushBack(&ps, 5);
	SeqListPushBack(&ps, 6);
	SeqListPushBack(&ps, 7);
	SeqListPushBack(&ps, 8);

	SeqListPrint(&ps);

	SeqListPopFront(&ps);
	SeqListPopFront(&ps);
	SeqListPopFront(&ps);
	SeqListPopFront(&ps);

	SeqListPrint(&ps);

	SeqListPopBack(&ps);
	SeqListPopBack(&ps);
	SeqListPopBack(&ps);

	SeqListPrint(&ps);

	int pos = SeqListFind(&ps, 5);

	if (pos != -1)
	{
		printf("%d ", ps.a[pos]);
	}

	SeqListDestory(&ps);



}

void TestSQList2()
{
	SL ps;

	SeqListInit(&ps);

	SeqListPushFront(&ps, 1);
	SeqListPushFront(&ps, 2);
	SeqListPushFront(&ps, 3);
	SeqListPushFront(&ps, 4);

	SeqListPrint(&ps);

	SeqListInsert(&ps, ps.size, 99);

	SeqListPrint(&ps);

	SeqListErase(&ps, ps.size-1);

	SeqListPrint(&ps);

	SeqListModify(&ps, 1, 199);

	SeqListPrint(&ps);


	SeqListDestory(&ps);
	
}


int main()
{
	//TestSQList1();
	TestSQList2();

	return 0;
}