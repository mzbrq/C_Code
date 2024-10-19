#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"


void TestSLTNode1()
{
	SLTNode* phead = NULL;

	//β��
	SLTNodePushBack(&phead, 1);
	SLTNodePushBack(&phead, 2);
	SLTNodePushBack(&phead, 3);
	SLTNodePushBack(&phead, 4);

	//ͷ��
	SLTNodePushFront(&phead, 10);
	SLTNodePushFront(&phead, 11);
	SLTNodePushFront(&phead, 12);
	SLTNodePushFront(&phead, 13);
	
	
	//��ӡ
	SLTNodePrint(phead);
	printf("\n");

	//ͷɾ
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);

	SLTNodePrint(phead);
	printf("\n");

	//βɾ
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