#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"


void TestSLTNode1()
{
	SLTNode* phead = NULL;

	//Œ≤≤Â
	SLTNodePushBack(&phead, 1);
	SLTNodePushBack(&phead, 2);
	SLTNodePushBack(&phead, 3);
	SLTNodePushBack(&phead, 4);

	//Õ∑≤Â
	SLTNodePushFront(&phead, 10);
	SLTNodePushFront(&phead, 11);
	SLTNodePushFront(&phead, 12);
	SLTNodePushFront(&phead, 13);
	
	
	//¥Ú”°
	SLTNodePrint(phead);
	printf("\n");

	//Õ∑…æ
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);

	SLTNodePrint(phead);
	printf("\n");

	//Œ≤…æ
	SLTNodePopBack(&phead);
	SLTNodePopBack(&phead);
	SLTNodePopBack(&phead);
	SLTNodePopBack(&phead);
	SLTNodePopBack(&phead);

	SLTNodePrint(phead);

	printf("\n");
	
}

int main()
{
	TestSLTNode1();

	return 0;
}