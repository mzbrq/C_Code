#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"

void STTest1()
{
	ST S1;
	StackInit(&S1);

	StackPush(&S1, 1);
	StackPush(&S1, 2);
	StackPush(&S1, 3);
	StackPush(&S1, 4);

	while (!StackEmpty(&S1))
	{
		printf("%d ", StackTop(&S1));
		StackPop(&S1);
	}

	printf("\n");

	StackDestory(&S1);
}

int main()
{
	STTest1();

	return 0;
}