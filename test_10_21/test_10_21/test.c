#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void TestSLTNode1()
{
	SLTNode* phead = NULL;

	//Í·²å
	SLTNodePushFront(&phead, 5);
	SLTNodePushFront(&phead, 6);
	SLTNodePushFront(&phead, 7);
	SLTNodePushFront(&phead, 8);

	//Î²²å
	SLTNodePushBack(&phead, 1);
	SLTNodePushBack(&phead, 2);
	SLTNodePushBack(&phead, 3);
	SLTNodePushBack(&phead, 4);

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
	SLTNodePopBack(&phead);

	SLTNodePrint(phead);

}


void TestSLTNode2()
{
	SLTNode* phead = NULL;

	//Í·²å
	SLTNodePushFront(&phead, 5);
	SLTNodePushFront(&phead, 6);
	SLTNodePushFront(&phead, 7);
	SLTNodePushFront(&phead, 8);

	//Î²²å
	SLTNodePushBack(&phead, 1);
	SLTNodePushBack(&phead, 2);
	SLTNodePushBack(&phead, 3);
	SLTNodePushBack(&phead, 4);

	SLTNodePrint(phead);

	//²åÈë

	SLTNode* pos1 = SLTNodeFind(&phead, 1);

	if (pos1)
	{
		SLTNodeInsert(&phead, pos1, 10);
	}

	SLTNodePrint(phead);

	//É¾³ý
	SLTNode* pos2 = SLTNodeFind(&phead, 4);

	if (pos2)
	{
		SLTNodeErase(&phead, pos2);
	}

	SLTNodePrint(phead);


}

int main()
{
	//TestSLTNode1();
	TestSLTNode2();

	return 0;
}