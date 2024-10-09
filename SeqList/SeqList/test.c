#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void TestSeqList()
{
	SL s1;
	//��ʼ��
	SeqListInit(&s1);

	//ͷ��
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

	//β��
	SeqListPushBack(&s1, 0);
	SeqListPushBack(&s1, 9);

	//ͷɾ
	SeqListPopFront(&s1);

	//βɾ
	SeqListPopBack(&s1);

	//��ָ��λ�ò���
	SeqListInsert(&s1, 9, 90);

	//��ָ��λ��ɾ��
	SeqListErase(&s1, 9);

	//��ӡ����

	PrintSeqList(&s1);

	printf("\n\n");

	//���Һ���
	SeqListFind(&s1, 9);

	//�޸ĺ���
	SeqListModify(&s1, 9, 100);

	printf("\n\n\n");
	PrintSeqList(&s1);
	

	//�ͷ��ڴ�
	SeqListDestory(&s1);
}

int main()
{
	TestSeqList();

	return 0;
}