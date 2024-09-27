#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//打印箭型

int main()
{
	int line = 0;

	while (scanf("%d", &line) == 1)
	{
		int i = 0;
		int j = 0;
		//上半部分
		for (i = 0; i < line; i++)
		{
			//打印空格
			for (j = 0; j < line - i; j++)
			{
				printf("  ");
			}

			//打印*
			for (j = 0; j < i + 1; j++)
			{
				printf("*");
			}

			printf("\n");
		}

		//下半部分
		for (i = 0; i < line + 1; i++)
		{
			//打印空格
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}

			//打印*
			for (j = 0; j < line+1-i; j++)
			{
				printf("*");
			}

			printf("\n");
		}
	}
	return 0;
}



//公务员面试


//单组输入

void bubble_sort(int arr[], int sz)
{
	int i = 0;

	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[7] = { 0 };
	int i = 0;
	int sum = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);


	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		

	}

	bubble_sort(arr, sz);

	for (i = 1; i < 6; i++)
	{
		sum += arr[i];
	}

	double score = sum / 5.0;

	printf("%0.2f", score);

	return 0;
}



//多组输入

int main()
{
	int sum = 0;
	int max = 0;
	int min = 100;
	int count = 0;
	int score = 0;

	while (scanf("%d", &score) == 1)
	{
		count++;

		//求出最大值与最小值
		if (score > max)
		{
			max = score;
		}
		if (score < min)
		{
			min = score;
		}

		//求和
		sum += score;

		if (count == 7)
		{
			printf("%.2lf", (sum - max - min) / 5.0);

			//重置数据
			max = 0;
			min = 100;
			count = 0;
			sum = 0;
		}

	}

		return 0;
}






