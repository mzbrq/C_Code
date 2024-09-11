#define _CRT_SECURE_NO_WARNINGS 1



//动态内存管理

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>


//malloc


/*int main()
{
	int n = 0;
	int i = 0;
	//scanf("%d", &n);
	int* p = NULL;
	p = (int*)malloc(n * sizeof(int);

	if (p == NULL)//开辟错误
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	else
	{
		//赋值
		for (i = 0; i < n; i++)
		{
			*(p + i) = i;
		}
	}

	//打印
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p);
	p = NULL;

	return 0;
}*/



//calloc

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	int* p = (int*)calloc(n, sizeof(int));

	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			*(p + i) = i;
		}

		//打印
		for (i = 0; i < n; i++)
		{
			printf("%d ", *(p + i));
		}
	}

	free(p);
	p = NULL;

	return 0;
}

