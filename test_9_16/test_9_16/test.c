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
//	//д�ļ�
//	int i = 0;
//
//	//������д��
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
//	//��ʽ���������
//	//fprintf(fp, "%d %s %f", s1.age, s1.name, s1.score);
//
//	//���ļ�
//
//	//�����ƵĶ�
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
//	//��ʽ�����뺯��
//	/*fscanf(fp, "%d %s %lf", &s2.age, s2.name, &s2.score);
//	printf("%d %s %f", s2.age, s2.name, s2.score);*/
//	
//
//
//	//�ر��ļ�
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}


//sprintf��sscanf

//int main()
//{
//	struct S s1 = { 20, "linxiang", 60.05 };
//	struct S tmp = { 0 };
//	char arr[30] = { 0 };
//
//	//��s�е�����д��arr��
//	sprintf(arr, "%d %s %f", s1.age, s1.name, s1.score);
//	printf("�ַ�����%s\n", arr);
//	
//	//��arr�е����������tmp��
//	sscanf(arr, "%d %s %lf", &tmp.age, tmp.name, &tmp.score);
//	printf("��ʽ��:%d %s %f", tmp.age, tmp.name, tmp.score);
//
//	return 0;
//}