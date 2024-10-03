#define _CRT_SECURE_NO_WARNINGS 1

//fibonacci数列


//代码1

#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<ctype.h>

//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//
//	scanf("%d", &n);
//
//	if (n == 0)
//	{
//		printf("0");
//	}
//	else if (n == 1)
//	{
//		printf("0");
//	}
//	else
//	{
//		while (1)
//		{
//			//fibonacci数列: 0 1 1 2 3 5 8 13 21 34
//
//			if (b > n)
//			{
//				//算最小步数
//				int sum = (n - a) > (b - n) ? (b - n) : (n - a);
//				printf("%d ", sum);
//
//				break;
//			}
//			else if (b < n)
//			{
//				a = b;
//				b = c;
//				c = a + b;
//			}
//			else
//			{
//				printf("0");
//				break;
//			}
//		}
//	}
//	return 0;
//}




//代码2

//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//
//	scanf("%d", &n);
//
//	while (1)
//	{
//		//fibonacci数列: 0 1 1 2 3 5 8 13 21 34
//
//		if (b > n)
//		{
//			//算最小步数
//
//			//使用绝对值函数
//			if (abs(n - a) > abs(n - b))
//			{
//				printf("%d ", abs(n - b));
//			}
//			else
//			{
//				printf("%d ", abs(n - a));
//			}
//
//			break;
//
//		}
//		else if (b < n)
//		{
//			a = b;
//			b = c;
//			c = a + b;
//		}
//		else
//		{
//			printf("0");
//			break;
//		}
//	}
//	
//	return 0;
//}





//把字符串中的空格替换成%20

void Display_Space(char* str)
{
	assert(str);
	int count = 0;

	//计算空格个数

	while (*str)
	{
		if (isspace(*str))
		{
			count++;
		}

		str++;
	}

	char* end1 = str;
	char* end2 = str + (count * 2);

	while (end1 != end2)
	{
		//*end1为空格时替换% 2 0
		if (isspace(*end1))
		{
			int i = 0;
			
			while (1)
			{
				*end2 = '0';
				end2--;

				*end2 = '2';
				end2--;

				*end2 = '%';

				break;
			}
		}
		else     //不为空格时*end2 = *end1
		{
			*end2 = *end1;
		}

		end1--;
		end2--;

		
	}
}

int main()
{
	char arr[30] = "this is a string";

	Display_Space(arr);

	printf("%s", arr);

	return 0;
}