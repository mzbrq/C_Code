#define _CRT_SECURE_NO_WARNINGS 1


//С���������Լ������С������֮��

#include<stdio.h>

int cmp_num(int n, int m)
{
	return (n > m ? n : m);
}

//�оٷ�
//int Min_num(int max, int min)
//{
//	int i = 0;
//
//	for (i = max; ; i++)
//	{
//		if (i % max == 0 && i % min == 0)
//		{
//			return i;
//		}
//	}
//
//	return 0;
//}

//�оٷ�
//int Max_num(int max, int min)
//{
//	int i = 0;
//
//	for (i = min; i > 0; i--)
//	{
//		if (max % i == 0 && min % i == 0)
//		{
//			return i;
//		}
//	}
//	return 0;
//}

//շת�����
int Max_num(int max, int min)
{
	int c = 0;

	while (c = (max % min))
	{
		min = c;
		max = min;
	

	}

	return min;
}

//max*min/���Լ�� == ��С������
int Min_num(int max, int min, int n)
{
	int c = max * min / n;

	return c;
}

int main()
{
	int n = 0;
	int m = 0;
	int max = 0;
	int min = 0;
	int sum = 0;

	while (scanf("%d %d", &n, &m) == 2)
	{
		max = cmp_num(n, m);
		if (max == n)
		{
			min = m;
		}
		else
		{
			min = n;
		}
		
		//���Լ��
		m = Max_num(max, min);

		//��С������
		n = Min_num(max, min, m);

		//���
		sum = n + m;

		printf("%d ", sum);
	}
	return 0;

}






//����������

#include<stdio.h>

int main()
{
	int n = 0;

	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}

			}
			printf("\n");
		}
	}

	return 0;
}