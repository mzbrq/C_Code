#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

void TestLTNode1()
{
	DLTNode* phead = DLTNodeInit();

	DLTNodePushBack(phead, 1);
	DLTNodePushBack(phead, 2);
	DLTNodePushBack(phead, 3);
	DLTNodePushBack(phead, 4);

	DLTNodePrint(phead);

	DLTNodePushFront(phead, 100);
	DLTNodePopBack(phead);

	DLTNodePrint(phead);

	DLTNodePopFront(phead);

	DLTNodePrint(phead);

	DLTNodeDestory(phead);

}


void TestLTNode2()
{
	printf("\n\n");
	DLTNode* phead = DLTNodeInit();

	DLTNodePushBack(phead, 1);
	DLTNodePushBack(phead, 2);
	DLTNodePushBack(phead, 3);
	DLTNodePushBack(phead, 4);

	DLTNodePrint(phead);

	DLTNode* pos = DLTNodeFind(phead, 1);

	if (pos != NULL)
	{
		DLTNodeInsert(pos, 99);
	}

	DLTNodePrint(phead);

	DLTNode* pos1 = DLTNodeFind(phead, 4);

	if (pos1 != NULL)
	{
		DLTNodeErase(pos1);
	}

	DLTNodePrint(phead);

	DLTNodeDestory(phead);
}


int main()
{

	TestLTNode1();
	
	TestLTNode2();

	return 0;
}