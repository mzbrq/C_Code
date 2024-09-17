#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

enum NUM
{
	Exit,
	Add,
	Del,
	Search,
	Amend,
	Show,
	Sort

};

void menu()
{
	printf("************************************\n");
	printf("******1. Add        2. Del  ********\n");
	printf("******3. Search     4. Amend********\n");
	printf("******5. Show       6. Sort ********\n");
	printf("******0. Exit               ********\n");
	printf("************************************\n");

}

int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);

	do
	{
		menu();
		printf("请输入操作数>:");
		scanf("%d", &input);

		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Amend:
			printf("Amend\n");
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			printf("Sort\n");
			break;
		case Exit:
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		default :
			printf("输入错误请重新输入\n");
			break;

		}

	} while (input);
	return 0;
}