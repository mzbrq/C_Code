#define _CRT_SECURE_NO_WARNINGS 1

//С���ָ�����

/*#include<stdio.h>
#include<math.h>

int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;

	scanf("%d", &n);

	while (n)
	{
		int k = n % 10;

		//�ж���ż
		if (k % 2 == 0)
		{
			//ż��
			k = 0;
		}
		else
		{
			//����
			k = 1;
		}

		sum += k * pow(10, i++);
		n /= 10;
	}

	printf("%d ", sum);

	return 0;
}*/





//��ӡ���ո��ֱ��������

/*#include<stdio.h>

int main()
{
	int length = 0;

	while (scanf("%d", &length) == 1)
	{
		int i = 0;
		//��
		for (i = 0; i < length; i++)
		{
			//*
			int j = 0;
			//��
			for (j = 0; j < length; j++)
			{
				
				if (j < length-1-i)//�ո�
				{
					printf("  ");
				}
				else//*
				{
					printf("* ");
				}
				
			}
			//����
			printf("\n");

			//�ո�
			if (i != length - 1)
			{
				for (j = 0; j < length; j++)
				{
					printf("  ");
				}
			}

			//����
			if (i != length - 1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}*/






//����

#include<stdio.h>

int main()
{
	double Oprice = 0.00;
	int month = 0;
	int date = 0;
	int discount = 0;
	double Rprice = 0;
	

	scanf("%lf %d %d %d", &Oprice, &month, &date, &discount);

	if (month == 11 && date == 11 || month == 12 && date == 12)
	{
		if (month == 11)//����
		{
			Rprice = (Oprice * 0.7) - (discount * 50);
		}
		else//˫12 ����
		{
			Rprice = (Oprice * 0.8) - (discount * 50);
		}
	}
	else
	{
		printf("����ָ������");
	}

	if (Rprice >= 0)
	{
		printf("%0.2f", Rprice);
	}
	else
	{
		printf("0.00");
	}

	return 0;
}