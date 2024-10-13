#define _CRT_SECURE_NO_WARNINGS 1

#include"Slist.h"

void TestSList1()
{
	SLTNode* phead = NULL;

	
	SLTNodePushFront(&phead, 1);
	SLTNodePushFront(&phead, 2);

	SLTNodePrint(phead);
}


int main()
{
	TestSList1();
	return 0;

}