#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	FILE* fp = fopen("D:\\Code\\C_Code\\C_Code\\test_9_21\\test_9_21\\test.txt", "r");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//Linxiang
//	//读文件
//	char a = 0;
//
//	fseek(fp, 1, SEEK_SET);
//	a = fgetc(fp);
//	printf("%c\n", a);//i
//
//	fseek(fp, 3, SEEK_CUR);
//	a = fgetc(fp);
//	printf("%c\n", a);//a
//
//	printf("%d\n", ftell(fp));//6
//
//	rewind(fp);
//	printf("%c\n", a);//a
//
//	//关闭文件
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}




//二进制读写

//int main()
//{
//	int a = 10000;
//	FILE* fp = fopen("D:\\Code\\C_Code\\C_Code\\test_9_21\\test_9_21\\test.txt", "wb");
//	if (fp == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//
//	//二进制写文件
//	fwrite(&a, sizeof(int), 1, fp);
//
//
//	//关闭文件
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}


//判断大小端字节序

//int main()
//{
//	int a = 1;//00 00 00 01
//	char b = a;
//	printf("%d", b);//1为小端， 0为大端
//
//		return 0;
//}