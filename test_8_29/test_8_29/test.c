#define _CRT_SECURE_NO_WARNINGS 1

//明解c语言

//练习2-1

/*#include<stdio.h>

int main()
{
	double x = 0.0;
	double y = 0.0;

	puts("请输入两个整数");

	printf("整数x：");
	scanf("%lf", &x);

	printf("整数y：");
	scanf("%lf", &y);

	double n = (x / y) * 100.0;

	printf("x的值是y的%f%%", n);


	return 0;
}*/



//练习2-2


/*#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	puts("请输入两个整数。");

	printf("整数a:");
	scanf("%d", &a);

	printf("整数b:");
	scanf("%d", &b);

	printf("它们的和是%d， 积是%d。", a+b, a*b);

	return 0;
}*/





//练习2-3


/*#include<stdio.h>

int main()
{
	double a = 0.00;
	printf("请输入一个实数：");
	scanf("%lf", &a);

	printf("你输入的是%f。", a);

	return 0;
}*/


//练习2-4

//#include<stdio.h>
//
//int main()
//{
//	int n1 = 0;
//	double d1 = 0.0;
//
//	scanf("%d %lf", &n1, &d1);
//
//	printf("%f\n", 3.0 * n1);/*浮点型常量*int变量*/
//	printf("%f\n", 3.0 * d1);/*浮点型常量*double变量*/
//	printf("%d\n", 3 * n1);/*整形常量*int变量*/
//	printf("%f\n", 3 * d1);/*整形常量*double变量*/
//	return 0;
//}





//模拟实现memcmp


/*#include<stdio.h>
#include<assert.h>

void* my_memcmp(void* dest,  const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);

	while (num--)
	{
		*(char*)dest = *(char*)src;

		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}

	return ret;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[10] = { 0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	my_memcmp(arr2, arr1, sizeof(arr1));

	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("%d", arr1[i]);
	}

	return 0;
}*/





//模拟实现memmove

#include<stdio.h>
#/*include<assert.h>

void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);

	if (dest < src)
	{
		//低->高
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
		//低->高
	}

	return ret;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	my_memmove(arr1, arr1+2, 20);

	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}*/










//小乐乐改数字

#include<stdio.h>
#include<math.h>

int main()
{
	int n = 0;//1234
	int count = 1;

	printf("输入一个整数:");
	scanf("%d", &n);
	
	int i = n;

	while (i /= 10)
	{
		count++;

	}

	while (count--)
	{
		int k = pow(10, count);

		if ((n / k) % 2 == 0 && (n / k) != 1)
		{
			//偶数
			printf("0");
			
		}
		else
		{
			//奇数
			printf("1");
			
		}

		n %= k;
	}


	return 0;
}