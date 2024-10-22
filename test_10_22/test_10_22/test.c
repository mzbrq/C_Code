#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

void TestDLTNode1()
{
	DLTNode* phead = DLTNodeInit();

	DLTNodePushBack(phead, 1);
	DLTNodePushBack(phead, 2);
	DLTNodePushBack(phead, 3);
	DLTNodePushBack(phead, 4);

	DLTNodePrint(phead);

	DLTNodePushFront(phead, 5);
	DLTNodePushFront(phead, 6);
	DLTNodePushFront(phead, 7);
	DLTNodePushFront(phead, 8);

	DLTNodePrint(phead);

	DLTNodePopBack(phead);
	DLTNodePopBack(phead);
	DLTNodePopBack(phead);
	DLTNodePopBack(phead);

	DLTNodePrint(phead);

	DLTNodePopFront(phead);
	DLTNodePopFront(phead);
	DLTNodePopFront(phead);
	DLTNodePopFront(phead);
	DLTNodePopFront(phead);

	DLTNodePrint(phead);


}


void TestDLTNode2()
{
	DLTNode* phead = DLTNodeInit();

	DLTNodePushBack(phead, 1);
	DLTNodePushBack(phead, 2);
	DLTNodePushBack(phead, 3);
	DLTNodePushBack(phead, 4);
	

	DLTNodePrint(phead);


	DLTNode* pos1 = DLTNodeFind(phead, 1);

	if (pos1)
	{
		DLTNodeInsert(phead, pos1, 100);
	}

	DLTNodePrint(phead);


	DLTNode* pos2 = DLTNodeFind(phead, 4);

	if (pos1)
	{
		DLTNodeErase(phead, pos2);
	}

	DLTNodePrint(phead);
}

int main()
{
	//TestDLTNode1();

	TestDLTNode2();

	return 0;
}