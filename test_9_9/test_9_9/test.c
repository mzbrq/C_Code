#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("***************************\n");
	printf("*****1. add     2. del*****\n");
	printf("*****3. search  4. amend***\n");
	printf("*****5. show    6. sort****\n");
	printf("*****0. exit    ***********\n");
	printf("***************************\n");

}

int main()
{
	int input = 0;
	Contact con;

	InitContact(&con);

	do
	{
		menu();
		printf("�����������>:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SeaContact(&con);
			break;
		case 4:
			AmeContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default :
			printf("�������������\n");
			break;
		}

	} while (input);

	return 0;
}