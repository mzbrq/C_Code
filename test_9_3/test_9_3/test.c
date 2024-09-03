#define _CRT_SECURE_NO_WARNINGS 1

//—Óª‘»˝Ω«

/*#include<stdio.h>

int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					arr[i][j] = 1;
				}
				if (j == 0)
				{
					arr[i][j] = 1;
				}
				if (i >= 2 && j >= 1)
				{
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				}
			}
	}

	//¥Ú”°

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");

	}

	return 0;
}*/





//◊Û–˝k∏ˆ◊÷∑˚


//∑Ω∑®1

/*#include<stdio.h>
#include<string.h>

void rotation(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	k %= len;

	for (i = 0; i < k; i++)
	{
		//◊Û–˝“ª∏ˆ◊÷∑˚
		int j = 0;
		char tmp = arr[0];

		for (j = 0; j < len-1; j++)
		{
			arr[j] = arr[j + 1];
		}

		arr[len - 1] = tmp;

	}
}

int main()
{
	char arr[] = "abcdefg";
	int k = 0;
	scanf("%d", &k);
	
	rotation(arr, k);

	printf("%s", arr);

	return 0;
}*/



//∑Ω∑®2

/*#include<stdio.h>
#include<string.h>
#include<assert.h>


void reverse(char* left, char* right)
{
	assert(left && right);

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}

void rotation(char* str, int k)
{
	int len = strlen(str);
	k %= len;

	//ƒÊ–Úk∏ˆ◊÷∑˚
	reverse(str, str + k - 1);
	//ƒÊ–Ú £”‡◊÷∑˚
	reverse(str + k, str + len - 1);
	//ƒÊ–Ú’˚∏ˆ◊÷∑˚¥Æ
	reverse(str, str + len - 1);
}

int main()
{
	char arr[] = "abcdefg";
	int k = 0;
	scanf("%d", &k);

	rotation(arr, k);

	printf("%s", arr);
	
	return 0;
}*/



//—Ó œæÿ’Û

//∑Ω∑®1

/*#include<stdio.h>

int find_num(int arr[3][3], int k, int r, int c)
{
	int x = 0;
	int y = c - 1;

	while (x <= r && y >= 0)
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
			return 1;
		}
	}

	return 0;
}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 0;
	scanf("%d", &k);

	int ret = find_num(arr, k, 3, 3);

	if (ret == 1)
	{
		printf("’“µΩ¡À\n");
	}
	else
	{
		printf("’“≤ªµΩ\n");
	}

	return 0;
}*/
