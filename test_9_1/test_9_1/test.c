#define _CRT_SECURE_NO_WARNINGS 1


//С���ָ�����

#include<stdio.h>
#include<math.h>

/*int main()
{
	int a = 0;

	while (scanf("%d", &a) == 1)
	{
		int i = 0;
		int sum = 0;

		while (a)
		{
			int k = a % 10;

			//����
			if (k % 2 == 0)//ż��Ϊ0
			{
				k = 0;
			}
			else
			{
				k = 1;
			}

			sum += k * pow(10, i++);

			a /= 10;
		}
		printf("%d ", sum);
	}


	return 0;
}*/




//��ӡֱ��������

/*#include<stdio.h>

int main()
{
	int len = 0;

	while (scanf("%d", &len) == 1)
	{
		int i = 0;

		for (i = 0; i < len; i++)
		{
			int j = 0;

			for (j = 0; j < len; j++)
			{
				if (j < len - 1 - i)
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}

			}
				printf("\n");
		}
	}
	return 0;
}*/




//����

/*#include<stdio.h>

int main()
{
	double price = 0.0;
	int month = 0;
	int date = 0;
	int flat = 0;

	//����
	scanf("%lf %d %d %d", &price, &month, &date, &flat);

	//����

	if (month == 11 && date == 11)
	{
		//����
		price = (price * 0.7) - (flat * 50);
	}
	else if (month == 12 && date == 12)
	{
		//����
		price = (price * 0.8) - (flat * 50);

	}
	else
	{
		printf("���Ż�\n");
	}

	if (price > 0)
	{
		printf("%0.2f", price);
	}
	else
	{
		printf("%.2f", 0.0);
	}

	return 0;
}*/




