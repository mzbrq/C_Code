#define _CRT_SECURE_NO_WARNINGS 1

//��

#include<stdio.h>
#include<stdlib.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MALLOC(NUM, type) (type*)malloc((NUM)*sizeof(type))

int main()
{
	int n = MAX(9, 5);

	printf("%d\n", n);

	int* p = MALLOC(3, int);

	//ʹ���ڴ�
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}

	//�ر��ڴ�
	free(p);
	p = NULL;

	return 0;
}