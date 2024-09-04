#define _CRT_SECURE_NO_WARNINGS 1

//杨氏矩阵

//方法1

/*#include<stdio.h>

struct point
{
	int x;
	int y;
};

struct point find_num(int arr[3][3], int k, int r, int c)
{
	int x = 0;
	int y = c - 1;
	struct point p = { -1, -1 };


	while (x <= r-1 && y >= 0)
	{
		if (k > arr[x][y])
		{
			x++;
		}
		else if (k < arr[x][y])
		{
			y--;
		}
		else
		{
			p.x = x;
			p.y = y;
			return p;
		}

	}

	return p;
}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 0;
	scanf("%d", &k);//p

	struct point ret = find_num(arr, k, 3, 3);

	printf("%d %d", ret.x, ret.y);

	return 0;
}*/






//方法2

/*#include<stdio.h>

int find_num(int arr[3][3], int* r, int* c, int k)
{
	int x = 0;
	int y = *c - 1;

	while (x <= *r - 1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			*r = x;
			*c = y;

			return 1;
		}

	}
	*r = -1;
	*c = -1;
	return 0;

}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6,7, 8, 9 };
	int r = 3;
	int c = 3;
	int k = 0;

	scanf("%d", &k);

	int ret = find_num(arr, &r, &c, k);

	if (ret = 1)
	{
		printf("%d %d\n", r, c);
	}
	else
	{
		printf("找不到\n");
	}

	return 0;
}*/






//判断旋转字符串

//方法1

/*#include<stdio.h>
#include<string.h>

int judge(char* s3, const char* s2)
{
	int len1 = strlen(s3);
	int len2 = strlen(s2);

	if (len1 == len2)
	{
		//判断
		int i = 0;
		for (i = 0; i < len1; i++)
		{
			int j = 0;
			//左移一个字符
			char tmp = *s3;

			for (j = 0; j < len1 - 1; j++)
			{
				*(s3 + j) = *(s3 + j + 1);
			}
			*(s3 + len1 - 1) = tmp;

			//进行判断
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
	char s2[] = "fgabcde";
	char s3[20] = { 0 };
	strcpy(s3, s1);

	int ret = judge(s3, s2);

	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}

	return 0;
}*/



//方法2

#include<stdio.h>
#include<string.h>

int judge(char s3[], char s2[])
{
	int len3 = strlen(s3);
	int len2 = strlen(s2);

	if (len3 == len2)
	{
		//判断
		strncat(s3, s3, len3);

		char* ret = strtsr(s3, s2);

		if (ret != NULL)
		{
			return 1;
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

}