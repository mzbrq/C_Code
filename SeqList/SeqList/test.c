#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void TestSeqList()
{
	SL s1;
	//初始化
	SeqListInit(&s1);

	//头插
	SeqListPushFront(&s1, 11);// 2 3 4 5 6 7 8 9 10 90 11 0  
	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 9);
	SeqListPushFront(&s1, 8);
	SeqListPushFront(&s1, 7);
	SeqListPushFront(&s1, 6);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 1);

	//尾插
	SeqListPushBack(&s1, 0);
	SeqListPushBack(&s1, 9);

	//头删
	SeqListPopFront(&s1);

	//尾删
	SeqListPopBack(&s1);

	//从指定位置插入
	SeqListInsert(&s1, 9, 90);

	//从指定位置删除
	SeqListErase(&s1, 9);

	//打印函数

	PrintSeqList(&s1);

	printf("\n\n");

	//查找函数
	SeqListFind(&s1, 9);

	//修改函数
	SeqListModify(&s1, 9, 100);

	printf("\n\n\n");
	PrintSeqList(&s1);
	

	//释放内存
	SeqListDestory(&s1);
}

int main()
{
	TestSeqList();

	return 0;
}