#define _CRT_SECURE_NO_WARNINGS 1

//�ж���ת�ַ�

//����1


/*#include<stdio.h>
#include<string.h>

int judge(char* s3, char* s2)
{
	int len3 = strlen(s3);
	int len2 = strlen(s2);

	if (len3 == len2)
	{
		//�ж�

		int i = 0;
		for (i = 0; i < len3; i++)
		{

			//����һ���ַ�
			char tmp = *s3;
			int j = 0;

			for (j = 0; j < len3 - 1; j++)
			{
				*(s3 + j) = *(s3 + j + 1);
			}

			*(s3 + len3 - 1) = tmp;

			if (strcmp(s3, s2) == 0)
			{
				return 1;
			}

		}

	}
	else
	{
		return 0;
	}

	return 0;
}


int main()
{
	char s1[] = "abcdefg";
	char s2[] = "bcdefga";
	char s3[20] = { 0 };
	strcpy(s3, s1);
	
	int ret = judge(s3, s2);

	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}*/





//����2

/*#include<stdio.h>
#include<string.h>

int judge(char* s1, char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 == len2)
	{
		//�ж�
		strncat(s1, s1, len1);

		char* ret = strstr(s1, s2);

		if (ret != NULL)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}


}

int main()
{
	char s1[20] = "abcdefg";
	char s2[20] = "cdefgab";

	int ret = judge(s1, s2);

	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}*/





//װ�þ���


//����1

/*#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;

	//����
	scanf("%d %d", &n, &m);

	int arr[2][3] = { 0 };

	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d ", &arr[i][j]);
		}
		
	}
	
	//װ��
	
	int b = 0;
	int arr2[3][2] = { 0 };

	for (i = 0; i < m; i++)
	{
		int a = 0;

		for (j = 0; j < n; j++)
		{
			arr2[i][j] = arr[a++][b];
		}

		b++;
	}


	//���

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/


//����2

/*#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int arr[10][10] = { 0 };

	//����

	scanf("%d %d", &n, &m);

	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	//���

	//��
	for (i = 0; i < m; i++)
	{
		//��
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}*/






//�����Ǿ����ж�

/*#include<stdio.h>

int judge(int arr[10][10], int n)
{
	int i = 0;
	int j = 0;
	
		for (i = 1; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (arr[i][j] != 0)
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
	int arr[10][10] = { 0 };
	//����
	scanf("%d", &n);
	
	int i = 0;
	int j = 0;

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

#include<stdio.h>

int main()
{
	int n = 0;
	int arr[50] = { 0 };
	int i = 0;

	//����
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	//�ж�
	if (arr[0] < arr[1])
	{
		//����

	}
	else
	{
		//����
	}

	//���

	if (flat == 1)
	{
		printf("")
	}
	return 0;
}