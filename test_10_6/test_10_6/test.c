#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//移除元素

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int val = 0;
//	int dest = 0;
//	int src = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//
//	scanf("%d", &val);// 2 3 3 2
//
//	while (src < sz)
//	{
//		if (arr[src] != val)
//		{
//			arr[dest] = arr[src];
//
//			dest++;
//			src++;
//		}
//		else
//		{
//			src++;
//		}
//	}
//
//	printf("%d\n", dest);
//
//	for (i = 0; i < dest; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}





//合并两个有序数组

int main()
{
	int m = 3;
	int n = 3;
	int num1[6] = { 0 };
	int num2[3] = { 0 };
	int i = 0;

	//输入

	for (i = 0; i < m; i++)
	{
		scanf("%d", &num1[i]);
	}

	for (i = 0; i < n; i++)
	{
		scanf("%d", &num2[i]);
	}

	//合并
	int start1 = 0;// 1 2 2
	int start2 = 0;// 4 5 6 
	while (start2 == n)
	{
		if (num2[start2] >= num1[start1])
		{
			start1++;
		}
		else
		{
			
		}
	}
	

	return 0;
}