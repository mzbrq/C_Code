#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<errno.h>

//int main()
//{
//	//���ļ�
//	FILE* fp = fopen("test.txt", "w");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	char arr[12] = "hello world";
//	fputs(arr, fp);
//	printf("%s", arr);
//
//
//	//�ر��ļ�
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}




//}int main()
//{
//	//���ļ�
//
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�
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
//	//ftell(�ļ�ָ������ʼλ�õ�ƫ����)
//	int a = ftell(fp);
//	printf("%d\n", a);//11
//
//
//	//rewind(���ļ�ָ�뷵����ʼλ��)
//	rewind(fp);
//	n = fgetc(fp);
//	printf("%c\n", n);//h
//
//
//
//
//	//�ر��ļ�
//	fclose(fp);
//	fp = NULL;
//
//	return 0;



