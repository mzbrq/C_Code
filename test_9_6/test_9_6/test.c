#define _CRT_SECURE_NO_WARNINGS 1


//ת��

/*#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int arr[10][10] = { 0 };

	//����
	int i = 0;
	int j = 0;

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	//���
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/





//�������ξ����ж�

/*#include<stdio.h>

int judge(int arr[10][10], int n)
{
	int r = 0;
	int c = 0;

	for (r = 0; r < n; r++)
	{
		for (c = 0; c < r; c++)
		{
			if (arr[r][c] != 0)
			{
				return 0;
			}
		}
	}

	return 1;

}

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;

	int arr[10][10] = { 0 };

	//����

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	//�ж�
	int ret = judge(arr, n);

	//���

	if (ret == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	
	}

	return 0;

}*/





//�ж���������


//����1

/*#include<stdio.h>

int judge(int arr[20], int n)
{
	int i = 0;

	while (i < n)
	{
		if (arr[i] < arr[i + 1])
		{
			//����
			for (; i < n - 1; i++)
			{
				if (arr[i] > arr[i + 1])
				{
					return 0;
				}
			}

		}
		else if (arr[i] > arr[i + 1])
		{
			//����
			for (i = 1; i < n-1; i++)
			{
				if (arr[i] < arr[i + 1])
				{
					return 0;
				}
			}
		}
		else
		{
			//���
			i++;
		}
	}

	return 1;

}
int main()
{
	int n = 0;
	int arr[20] = { 0 };

	//����
	int i = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	//�ж�

	int ret = judge(arr, n);
	
	//���

	if (ret == 1)
	{
		printf("sorted\n");
	}
	else
	{
		printf("unsorted\n");
	}

	return 0;
}*/



//����2

/*#include<stdio.h>

int main()
{
	int n = 0;
	int arr[20] = { 0 };
	int flag1 = 0;
	int flag2 = 0;

	//����+�ж�

	int i = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else if (arr[i] < arr[i - 1])
			{
				flag2 = 1;
			}
			else
			{
				;
			}
		}
	}


	//���
	if (flag1 + flag2 <= 1)
	{
		printf("sorted\n");
	}
	else
	{
		printf("unsorted\n");
	}

	return 0;
}*/



