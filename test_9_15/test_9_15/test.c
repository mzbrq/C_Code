#define _CRT_SECURE_NO_WARNINGS 1

//文件的打开

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	FILE* pf = fopen("test.exe", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//文件的写


//int main()
//{
//	FILE* pf = fopen("D:\\Code\\C_Code\\C_Code\\test_9_15\\test_9_15\\test.txt.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//
//	//写文件
//	char i = 0;
//
//	for (i = 'a'; i < 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//文件的读

int main()
{
	FILE* pf = fopen("D:\\Code\\C_Code\\C_Code\\test_9_15\\test_9_15\\test.txt.txt", "r");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}

	//读文件
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}