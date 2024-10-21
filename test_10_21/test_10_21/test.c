#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void TestSLTNode1()
{
	SLTNode* phead = NULL;

	//ͷ��
	SLTNodePushFront(&phead, 5);
	SLTNodePushFront(&phead, 6);
	SLTNodePushFront(&phead, 7);
	SLTNodePushFront(&phead, 8);

	//β��
	SLTNodePushBack(&phead, 1);
	SLTNodePushBack(&phead, 2);
	SLTNodePushBack(&phead, 3);
	SLTNodePushBack(&phead, 4);

	SLTNodePrint(phead);

	//ͷɾ
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);
	SLTNodePopFront(&phead);

	SLTNodePrint(phead);

	//βɾ
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

	//ͷ��
	SLTNodePushFront(&phead, 5);
	SLTNodePushFront(&phead, 6);
	SLTNodePushFront(&phead, 7);
	SLTNodePushFront(&phead, 8);

	//β��
	SLTNodePushBack(&phead, 1);
	SLTNodePushBack(&phead, 2);
	SLTNodePushBack(&phead, 3);
	SLTNodePushBack(&phead, 4);

	SLTNodePrint(phead);

	//����

	SLTNode* pos1 = SLTNodeFind(&phead, 1);

	if (pos1)
	{
		SLTNodeInsert(&phead, pos1, 10);
	}

	SLTNodePrint(phead);

	//ɾ��
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