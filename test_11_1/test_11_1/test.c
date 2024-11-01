#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

int main()
{
	DLTNode* phead = DLTNodeInit();

	ListNodePushBack(phead, 1);
	ListNodePushBack(phead, 2);
	ListNodePushBack(phead, 3);
	ListNodePushBack(phead, 4);

	ListNodePrint(phead);

	return 0;
}