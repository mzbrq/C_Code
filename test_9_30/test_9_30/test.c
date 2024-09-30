#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ��atoi
//�迼��
// �ո�
// ���ַ���
// ������
// Խ��
//

#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>

enum status
{
	VALID,
	INVALID
} sta = INVALID; // Ĭ��Ϊ�Ƿ�����

int my_atoi(const char* str)
{
	assert(str);
	int flag = 1;
	long long ret = 0;

	if (*str == '\0')
	{
		//�Ƿ�����
		return 0;
	}

	//�����ո�
	while (isspace(*str))
	{
		str++;
	}

	//�ж�������
	if (*str == '-')
	{
		flag = -1;
		str++;//��������
	}
	if(*str == '+')
	{
		str++;//��������
	}

	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + flag * (*str - '0');

			//�ж�Խ��
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
		printf("�Ƿ�����:");
	}
	else
	{
		printf("�Ϸ�����:");
	}

	printf("%d ", ret);

	return 0;
}