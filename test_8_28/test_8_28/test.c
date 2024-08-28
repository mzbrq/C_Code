#define _CRT_SECURE_NO_WARNINGS 1

//strerror(返回错误码)

//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//
//int main()
//{
//	FILE* pFile = fopen("test.txt", "r");/*读文件,找不到返回NULL*/
//	if (pFile == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("找到了\n");
//
//	}
//
//	return 0;
//}
//




//字符分类函数

//isdigit(10进制数字为真)

//#include<stdio.h>
//#include<string.h>

/*int main()
{
	char n = 'w';

	int ret = isdigit(n);//不为十进制返回0

	printf("%d", ret);
	

	return 0;
}*/




//islower(判断小写)

/*int main()
{
	char n = 'x';

	int ret = islower(n);

	printf("%d ", ret);//为假返回0

	return 0;
}*/




//issapce(空白字符为真)

/*int main()
{
	char n = ' ';

	if (isspace(n))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	return 0;
}*/









//字符转换函数

//tolower(转换为小写)

/*#include<stdio.h>
#include<ctype.h>

int main()
{
	char n = 'a';

	int ret = tolower(n);//返回ASCII值
	
	printf("%c\n", ret);
	printf("%c ", n);


	return 0;
}*/




//



//memcpy(内存拷贝)  /*destination与source不能叠加*/


/*#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "this is a string";
	char arr2[20] = { 0 };

	memcpy(arr2, arr1, strlen(arr1)+1);

	printf("%s\n", arr2);

	return 0;
}*/




