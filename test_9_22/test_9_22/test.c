#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<errno.h>

//int main()
//{
//	//打开文件
//	FILE* fp = fopen("test.txt", "w");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	char arr[12] = "hello world";
//	fputs(arr, fp);
//	printf("%s", arr);
//
//
//	//关闭文件
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}




//}int main()
//{
//	//打开文件
//
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	//hello world
//	
//
//	//fseek
//	char n = 0;
//	fseek(fp, 1, SEEK_SET);
//	n = fgetc(fp);
//	printf("%c\n", n);//e
//
//	fseek(fp, -3, SEEK_END);
//	n = fgetc(fp);
//	printf("%c\n", n);//r
//
//	fseek(fp, 1, SEEK_CUR);
//	n = fgetc(fp);
//	printf("%c\n", n);//d
//
//
//	//ftell(文件指针与起始位置的偏移量)
//	int a = ftell(fp);
//	printf("%d\n", a);//11
//
//
//	//rewind(把文件指针返回起始位置)
//	rewind(fp);
//	n = fgetc(fp);
//	printf("%c\n", n);//h
//
//
//
//
//	//关闭文件
//	fclose(fp);
//	fp = NULL;
//
//	return 0;



