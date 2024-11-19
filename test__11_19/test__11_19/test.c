#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"

int main()
{
	ST s1;

	StackInit(&s1);

	StackPush(&s1, 1);
	StackPush(&s1, 2);
	StackPush(&s1, 3);
	StackPush(&s1, 100);

	StackPop(&s1);
	StackPop(&s1);

	StackPush(&s1, 9);
	StackPush(&s1, 4);
	StackPush(&s1, 5);

	printf("\n%d\n", StackSize(&s1));


	while (!StackEmpty(&s1))
	{
		printf("%d ", StackTop(&s1));

		StackPop(&s1);
	}

	printf("\n%d\n", StackSize(&s1));

	StackDestory(&s1);

	return 0;
}