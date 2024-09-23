#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//预定义符号

int main()
{
	//打开文件
	file* fp = fopen("test.txt", "w");
	if (fp == null)
	{
		perror("fopen");
		return 1;
	}

	//写文件
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		fprintf(fp, " %s %d line = %d date = %s time = %s\n", __file__, i, __line__, __date__, __time__);
	}

	if (!__stdc__)
	{
		printf("不是标准c\n");
	}

	//关闭文件
	fclose(fp);
	fp = null;

	return 0;
}



//#define定义宏

#define SQUARE(x) ((x)*(x))

int main()
{
	int r = SQUARE(5 + 1);

	printf("%d", r);

	return 0;
}



//#和##

//#1

#define PRINTF(N) printf("this is value of "#N" is %d\n", N)

int main()
{
	int a = 10;
	int b = 20;
	PRINTF(a);

	PRINTF(b);
	return 0;
}


//#2

#define PRINT(N, FORMAT) printf("this is of value "#N" is "FORMAT"\n", N);

int main()
{
	int a = 10;
	double b = 3.14;

	PRINT(a, "%d");
	PRINT(b, "%f");

	return 0;
}



