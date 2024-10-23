#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

void TestListNode1()
{
	DLTNode* phead = DLTNodeInit();

	DLTNodeInsert(phead, 1);
	DLTNodeInsert(phead, 2);
	DLTNodeInsert(phead, 3);
	DLTNodeInsert(phead->next, 4);
	
	DLTNodePrint(phead);

	DLTNodeErase(phead->prev);

	DLTNodePrint(phead);


	DLTNodeDestory(phead);
}

int main()
{
	TestListNode1();

	return 0;
}