#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("*****************************\n");
	printf("*****1. add      2. del******\n");
	printf("*****3. search   4. sort ****\n");
	printf("*****5. show     0. exit*****\n");
}

int main()

{
	int input = 0;
	Contact con;
	InitContact(&con);

	do
	{
		
		menu();
		printf("请输入:>\n");
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
			//SeaContact(&con);
			break;
		case 4:
			//SortContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
		

	} while (input);

	return 0;
}