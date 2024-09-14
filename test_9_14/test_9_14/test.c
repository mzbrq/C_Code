#define _CRT_SECURE_NO_WARNINGS 1

//�����Լ������С������֮��

#include<stdio.h>

int max_num(int max, int min)
{
	int c = 0;

	while (c = max % min)
	{
		min = c;
		max = min;
	}

	return min;
}

int min_num(int max, int min, int a)
{
	return (max * min / a);
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
		max = n > m ? n : m;
		min = n < m ? n : m;


		//���Լ��
		m = max_num(max, min);

		//��С������ == m * n / ���Լ��
		n = min_num(max, min, m);

		//���
		sum = m + n;
		printf("%d", sum);

	}
	return 0;
}





//��ӡ����������

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
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
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




//���������ʹ��

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

struct s
{
	int n;
	int arr[];
};

int main()
{
	int i = 0;
	struct s* pc = (struct s*)malloc(sizeof(struct s)+40);
	if (pc == NULL)
	{
		return 1;

	}

	for (i = 0; i < 10; i++)
	{
		pc->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pc->arr[i]);
	}

	struct s* str = (struct s*)realloc(pc, sizeof(struct s) + 80);
	if (str == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		pc = str;
	}

	free(pc);
	pc = NULL;

	return 0;
}