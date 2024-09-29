#define _CRT_SECURE_NO_WARNINGS 1

//找出两个出现一次的数字

#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>>

int main()
{
	int arr[] = { 1, 2, 3, 3, 4, 4, 5, 5 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	
	for (i = 0; i < sz ; i++)
	{
		int j = 0;
		int flat = 0;

		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j] && i != j)
			{
				flat = 1;
				break;
			}
		}

		if (flat == 0)
		{
			printf("%d ", arr[i]);
		}

	}

	

	


	return 0;
}




//方法2

void find_single_dogs(int arr[], int sz, int* pd1, int* pd2)
{
	int i = 0;
	int ret = 0;
	int pos = 0;
	//异或
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}

	//找到ret二进制中 1的位置
	for (pos = 0; pos < 32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;
		}
	}

	//分组
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*pd1 ^= arr[i];
		}
		else
		{
			*pd2 ^= arr[i];
		}
	}

}

int main()
{
	int arr[] = { 1, 2, 3, 3, 4, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int dog1 = 0;
	int dog2 = 0;

	find_single_dogs(arr, sz, &dog1, &dog2);

	printf("%d %d ", dog1, dog2);

	return 0;
}






//模拟实现atoi

//需要考虑
//空格
//正负号
//空字符串
//越界
//非法数字
//

enum Status
{
	VALID,
	INVALID
}sta = INVALID; // 默认非法返回;

int my_atoi(const char* str)
{
	assert(str);
	int flag = 1;//判断正负, 默认为正

	if (*str == '\0')
	{
		return 0;
	}
	
	//空格
	while (isspace(*str))
	{
		str++;
	}

	//正负
	if (*str == '-')
	{
		flag = -1;
		str++; //跳过正负号
	}
	else
	{
		str++;
	}

	long long ret = 0;


	while (*str) //判断字符串
	{
		if (isdigit(*str))
		{

			ret = ret * 10 + flag * (*str - '0');

			//判断越界, 需把ret改成大于int类型
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
			str++;
		}
		else
		{
			return ret;
		}
	}

	if (*str == '\0')
	{
		sta = VALID;
	}

	return (int)ret;

}

int main()
{
	char arr[] = "     +12abc3";

	int ret = my_atoi(arr);

	if (sta == INVALID)
	{
		printf("非法返回:");
	}
	else
	{
		printf("合法返回:");
	}

	printf("%d", ret);

	return 0;
}