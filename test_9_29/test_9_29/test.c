#define _CRT_SECURE_NO_WARNINGS 1

//�ҳ���������һ�ε�����

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




//����2

void find_single_dogs(int arr[], int sz, int* pd1, int* pd2)
{
	int i = 0;
	int ret = 0;
	int pos = 0;
	//���
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}

	//�ҵ�ret�������� 1��λ��
	for (pos = 0; pos < 32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;
		}
	}

	//����
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






//ģ��ʵ��atoi

//��Ҫ����
//�ո�
//������
//���ַ���
//Խ��
//�Ƿ�����
//

enum Status
{
	VALID,
	INVALID
}sta = INVALID; // Ĭ�ϷǷ�����;

int my_atoi(const char* str)
{
	assert(str);
	int flag = 1;//�ж�����, Ĭ��Ϊ��

	if (*str == '\0')
	{
		return 0;
	}
	
	//�ո�
	while (isspace(*str))
	{
		str++;
	}

	//����
	if (*str == '-')
	{
		flag = -1;
		str++; //����������
	}
	else
	{
		str++;
	}

	long long ret = 0;


	while (*str) //�ж��ַ���
	{
		if (isdigit(*str))
		{

			ret = ret * 10 + flag * (*str - '0');

			//�ж�Խ��, ���ret�ĳɴ���int����
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
		printf("�Ƿ�����:");
	}
	else
	{
		printf("�Ϸ�����:");
	}

	printf("%d", ret);

	return 0;
}