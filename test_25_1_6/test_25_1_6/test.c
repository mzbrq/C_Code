#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

void SLTest1()
{
	SL ps;
	SLInit(&ps);

	SLCheckCapacity(&ps);

	SLPushFront(&ps, 1);
	SLPushFront(&ps, 2);
	SLPushFront(&ps, 3);

	SLPrint(&ps);

	SLPushEnd(&ps, 4);
	SLPushEnd(&ps, 5);
	SLPushEnd(&ps, 6);

	SLPrint(&ps);

	SLPopFront(&ps);
	SLPopFront(&ps);
	SLPopFront(&ps);

	SLPrint(&ps);

	SLPopEnd(&ps);
	SLPopEnd(&ps);
	SLPopEnd(&ps);

	SLPrint(&ps);


}

void SLTest2()
{
	SL ps;
	SLInit(&ps);

	SLInsert(&ps, 0, 1);
	SLInsert(&ps, 1, 2);
	SLInsert(&ps, 2, 3);

	SLPrint(&ps);

	SLErase(&ps, 0);
	SLErase(&ps, 1);

	SLPrint(&ps);

	SLModify(&ps, 0, 100);

	SLPrint(&ps);

	SLFind(&ps, 1);

	SLDestory(&ps);

}

int main()
{
	//SLTest1();
	SLTest2();

	return 0;
}