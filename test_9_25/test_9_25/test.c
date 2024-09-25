#define _CRT_SECURE_NO_WARNINGS 1

//宏

#include<stdio.h>
#include<stdlib.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MALLOC(NUM, type) (type*)malloc((NUM)*sizeof(type))

int main()
{
	int n = MAX(9, 5);

	printf("%d\n", n);

	int* p = MALLOC(3, int);

	//使用内存
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}

	//关闭内存
	free(p);
	p = NULL;

	return 0;
}