#define _CRT_SECURE_NO_WARNINGS 1

//strerror(���ش�����)

//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//
//int main()
//{
//	FILE* pFile = fopen("test.txt", "r");/*���ļ�,�Ҳ�������NULL*/
//	if (pFile == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("�ҵ���\n");
//
//	}
//
//	return 0;
//}
//




//�ַ����ຯ��

//isdigit(10��������Ϊ��)

//#include<stdio.h>
//#include<string.h>

/*int main()
{
	char n = 'w';

	int ret = isdigit(n);//��Ϊʮ���Ʒ���0

	printf("%d", ret);
	

	return 0;
}*/




//islower(�ж�Сд)

/*int main()
{
	char n = 'x';

	int ret = islower(n);

	printf("%d ", ret);//Ϊ�ٷ���0

	return 0;
}*/




//issapce(�հ��ַ�Ϊ��)

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









//�ַ�ת������

//tolower(ת��ΪСд)

/*#include<stdio.h>
#include<ctype.h>

int main()
{
	char n = 'a';

	int ret = tolower(n);//����ASCIIֵ
	
	printf("%c\n", ret);
	printf("%c ", n);


	return 0;
}*/




//



//memcpy(�ڴ濽��)  /*destination��source���ܵ���*/


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




