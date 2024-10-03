#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//找出消失的数字


//方法1(排序+挨个查找)

void bubble_sort(int arr[], int sz)
{
	int i = 0;

	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

			}
		}
	}
}

int main()
{
	int arr[3] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	//排序
	bubble_sort(arr, sz);

	//找出消失的数字
	for (i = 0; i < sz; i++)
	{
		if (arr[i] != i)
		{
			printf("%d ",i);
			break;
		}
	}

	return 0;
}


//方法2(通过异或，异或支持交换律)

int main()
{
	int arr[8] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int ret = 0;

	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	//第一步: 让数组每个元素异或
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}

	//第二步: 再异或0到n的每个数

	for (i = 0; i < 8 + 1; i++)
	{
		ret ^= i;
	}

	printf("%d ", ret);

	return 0;
}






//数组旋转

//方法1(把数组最后一位拿出来，让数组每一位右移，再把最后一位放到第一位)

int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int k = 3;

	for (i = 0; i < k; i++)
	{
		int j = 0;
		int tmp = arr[sz - 1];

		for (j = sz - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}

		arr[0] = tmp;
	}

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}




//方法2(分别逆序左边数组和右边数组，最后整体逆序数组)

int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7 }; // 4, 3, 2, 1, 0, 7, 6, 5 // 5, 6, 7, 0, 1, 2, 3, 4
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int k = 8;

	int left1 = 0;
	int right1 = sz - k - 1;
	int left2 = sz - k;
	int right2 = sz - 1;
	int left3 = 0;
	int right3 = sz - 1;

	if (k >= sz)
	{
		k %= sz;
	}

	//逆序左边数组

	while (left1 < right1)
	{
		int tmp1 = arr[left1];
		arr[left1] = arr[right1];
		arr[right1] = tmp1;

		left1++;
		right1--;
	}

	//逆序右边数组

	while (left2 < right2)
	{
		int tmp2 = arr[left2];
		arr[left2] = arr[right2];
		arr[right2] = tmp2;

		left2++;
		right2--;
	}

	//逆序整体数组

	while (left3 <= right3)
	{
		int tmp3 = arr[left3];
		arr[left3] = arr[right3];
		arr[right3] = tmp3;

		left3++;
		right3--;
	}

	//打印数组

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);

	}

	return 0;
}