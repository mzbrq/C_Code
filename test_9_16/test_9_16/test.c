#define _CRT_SECURE_NO_WARNINGS 1

//

#include<stdio.h>
#include<string.h>
#include<errno.h>

struct S
{
	int age;
	char name[10];
	double score;
};

//int main()
//{
//
//	struct S s1 = { 20, "linxiang", 60.05 };
//	struct S s2 = { 0 };
//	FILE* fp = fopen("D:\\Code\\C_Code\\C_Code\\test_9_16\\test_9_16\\test.txt", "rb");
//	if (fp == NULL)
//	{
//		//printf("%s", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	int i = 0;
//
//	//二进制写入
//	fwrite(&s1, sizeof(struct S), 1, fp);
//
//
//	/*fputs("this a string\n", fp);
//	fputs("this a string\n", fp);*/
//	/*for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}*/
//
//	//fputs("hello ", fp);
//	
//	//格式化输出函数
//	//fprintf(fp, "%d %s %f", s1.age, s1.name, s1.score);
//
//	//读文件
//
//	//二进制的读
//
//	fread(&s2, sizeof(struct S), 1, fp);
//	printf("%d %s %f", s2.age, s2.name, s2.score);
//	char arr[30] = { 0 };
//	int arr1[20] = { 0 };
//	//i = fgetc(fp);
//	//printf("%c\n", i);//h
//	//i = fgetc(fp);
//	//printf("%c\n", i);//e
//	//i = fgetc(fp);
//	//printf("%c\n", i);//l
//
//	/*fgets(arr, 6, fp);
//	printf(arr);*/
//
//	//格式化输入函数
//	/*fscanf(fp, "%d %s %lf", &s2.age, s2.name, &s2.score);
//	printf("%d %s %f", s2.age, s2.name, s2.score);*/
//	
//
//
//	//关闭文件
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}


//sprintf和sscanf

//int main()
//{
//	struct S s1 = { 20, "linxiang", 60.05 };
//	struct S tmp = { 0 };
//	char arr[30] = { 0 };
//
//	//把s中的数据写到arr中
//	sprintf(arr, "%d %s %f", s1.age, s1.name, s1.score);
//	printf("字符串：%s\n", arr);
//	
//	//把arr中的数据输出到tmp中
//	sscanf(arr, "%d %s %lf", &tmp.age, tmp.name, &tmp.score);
//	printf("格式化:%d %s %f", tmp.age, tmp.name, tmp.score);
//
//	return 0;
//}