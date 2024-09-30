#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现atoi
//需考虑
// 空格
// 空字符串
// 正负号
// 越界
//

#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>

enum status
{
	VALID,
	INVALID
} sta = INVALID; // 默认为非法返回

int my_atoi(const char* str)
{
	assert(str);
	int flag = 1;
	long long ret = 0;

	if (*str == '\0')
	{
		//非法返回
		return 0;
	}

	//跳过空格
	while (isspace(*str))
	{
		str++;
	}

	//判断正负号
	if (*str == '-')
	{
		flag = -1;
		str++;//跳过负号
	}
	if(*str == '+')
	{
		str++;//跳过正号
	}

	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + flag * (*str - '0');

			//判断越界
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}

			str++;

		}
		else
		{
			return (int)ret;
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
	char arr[] = "0";

	int ret = my_atoi(arr);

	if (sta == INVALID)
	{
		printf("非法返回:");
	}
	else
	{
		printf("合法返回:");
	}

	printf("%d ", ret);

	return 0;
}