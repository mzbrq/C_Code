#define _CRT_SECURE_NO_WARNINGS 1

//��ʵ��offsetof(��ƫ����)

#include<stdio.h>

#define OFFSETOF(type, m_name) (size_t)&(((type*)0)->m_name)

struct S
{
	char a;
	int i;
	char n;
}; 

int main()
{
	struct S s = { 0 };

	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, n));

	return 0;
}




//��ӡ����

int main()
{
	int line = 0;

	while (scanf("%d", &line) == 1)
	{
		int i = 0;
		int j = 0;

		//�ϰ벿��(n��)

		for (i = 0; i < line; i++)
		{
			for (j = 0; j < line - i; j++)
			{
				//�ո�
				printf("  ");
			}

			//*
			for (j = 0; j < i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		//�°벿��(n+1��)
		for (i = 0; i < line + 1; i++)
		{
			//��ӡ�ո�
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}

			//*
			for (j = 0; j < line + 1 - i; j++)
			{
				printf("*");
			}

			printf("\n");
		}

	}
	return 0;
}



