#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��ӡ����

int main()
{
	int line = 0;

	while (scanf("%d", &line) == 1)
	{
		int i = 0;
		int j = 0;
		//�ϰ벿��
		for (i = 0; i < line; i++)
		{
			//��ӡ�ո�
			for (j = 0; j < line - i; j++)
			{
				printf("  ");
			}

			//��ӡ*
			for (j = 0; j < i + 1; j++)
			{
				printf("*");
			}

			printf("\n");
		}

		//�°벿��
		for (i = 0; i < line + 1; i++)
		{
			//��ӡ�ո�
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}

			//��ӡ*
			for (j = 0; j < line+1-i; j++)
			{
				printf("*");
			}

			printf("\n");
		}
	}
	return 0;
}



//����Ա����


//��������

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



//��������

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

		//������ֵ����Сֵ
		if (score > max)
		{
			max = score;
		}
		if (score < min)
		{
			min = score;
		}

		//���
		sum += score;

		if (count == 7)
		{
			printf("%.2lf", (sum - max - min) / 5.0);

			//��������
			max = 0;
			min = 100;
			count = 0;
			sum = 0;
		}

	}

		return 0;
}






