#define _CRT_SECURE_NO_WARNINGS 1

//�ļ��Ĵ�

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
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//�ļ���д


//int main()
//{
//	FILE* pf = fopen("D:\\Code\\C_Code\\C_Code\\test_9_15\\test_9_15\\test.txt.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//
//	//д�ļ�
//	char i = 0;
//
//	for (i = 'a'; i < 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//�ļ��Ķ�

int main()
{
	FILE* pf = fopen("D:\\Code\\C_Code\\C_Code\\test_9_15\\test_9_15\\test.txt.txt", "r");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}

	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}