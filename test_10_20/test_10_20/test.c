#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void TestSLTNode1()
{
	SLTNode* phead = NULL;

	//Í·²å
	SLTNodePushFront(&phead, 1);
	SLTNodePushFront(&phead, 2);
	SLTNodePushFront(&phead, 3);
	SLTNodePushFront(&phead, 4);

	SLTNodePrint(phead);

	//Î²²å
	SLTNodePushBack(&phead, 10);
	SLTNodePushBack(&phead, 11);
	SLTNodePushBack(&phead, 12);
	SLTNodePushBack(&phead, 13);

	SLTNodePrint(phead);

	//Í·É¾
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);

	SLTNodePrint(phead);

	//Î²É¾
	SLTNodePopBack(&phead);
	SLTNodePopBack(&phead);
	SLTNodePopBack(&phead);
	SLTNodePopBack(&phead);
	

	SLTNodePrint(phead);

}

void TestSLTNode2()
{

	SLTNode* phead = NULL;

	SLTNodePushFront(&phead, 1);
	SLTNodePushFront(&phead, 2);
	SLTNodePushFront(&phead, 3);
	SLTNodePushFront(&phead, 4);

	SLTNodePrint(phead);

	SLTNode* pos1 = SLTNodeFind(&phead, 4);

	if (pos1)
	{
		SListInsert(&phead, pos1, 30);
	}

	SLTNodePrint(phead);

	SLTNode* pos2 = SLTNodeFind(&phead, 1);

	if (pos2)
	{
		SListErase(&phead, pos2);
	}

	SLTNodePrint(phead);

	
}


int main()
{
	//TestSLTNode1();
	TestSLTNode2();
	
	return 0;
}