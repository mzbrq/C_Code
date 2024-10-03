#define _CRT_SECURE_NO_WARNINGS 1

//消失的数字


//方法1

#include<stdio.h>

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;//0, 1, 2, 3, 4, 5, 6
//
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n = 10;
//	int i = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	} 
//
//	//排序
//	bubble_sort(arr, sz);
//
//	//找出消失的数字
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != i)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//	
//	return 0;
//}





//方法2

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int x = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//数组之间的值异或
//	for (i = 0; i < sz; i++)
//	{
//		x ^= arr[i];
//	}
//
//	//再与0到n之间的数异或
//	for (i = 0; i < sz + 1; i++)
//	{
//		x ^= i;
//	}
//
//	printf("%d ", x);
//
//	return 0;
//}








//旋转数组


//方法1

//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int k = 3;
//	int j = 0;
//
//	for (i = 0; i < k; i++)
//	{
//		int tmp = arr[sz - 1];
//
//		for (j = sz-1; j > 0; j--)
//		{
//			arr[j] = arr[j - 1];
//		}
//
//		arr[0] = tmp;
//
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




//方法2(逆序)

