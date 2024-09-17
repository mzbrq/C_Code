#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//初始化函数
void InitContact(Contact* pc)
{
	assert(pc);

	pc->date = (PeoInfo*)calloc(MAX, sizeof(PeoInfo));
	if (pc->date == NULL)
	{
		perror("InitContact");
		return;
	}

	pc->count = 0;
	pc->capacity = MAX;

}

//销毁通讯录
void DestoryContact(Contact* pc)
{
	assert(pc);
	free(pc->date);
	pc->date = NULL;
}



//添加通讯录信息

void AddCapacity(Contact* pc)
{
	PeoInfo* str = (PeoInfo*)realloc(pc->date, (pc->capacity + MAX) * sizeof(PeoInfo));
	if (str == NULL)
	{
		perror("AddCapacity");
		return;
	}
	pc->date = str;
	pc->capacity += MAX;
	printf("增容成功\n\n\n\n");
}

void AddContact(Contact* pc)
{
	assert(pc);

	if (pc->count == pc->capacity)
	{
		//增容
		AddCapacity(pc);
	}

	printf("请输入添加人的名字\n");
	scanf("%s", pc->date[pc->count].name);

	printf("请输入添加人的性别\n");
	scanf("%s", pc->date[pc->count].sex);

	printf("请输入添加人的年龄\n");
	scanf("%d", &pc->date[pc->count].age);

	printf("请输入添加人的电话\n");
	scanf("%s", pc->date[pc->count].tele);

	printf("请输入添加人的地址\n");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("添加成功\n\n\n");
	
}





//展示通讯录
void ShowContact(const Contact* pc)
{
	assert(pc);

	int i = 0;
	printf("%-2s\t%-10s\t%-10s\t%-5s\t%-12s\t%-20s\n", "序号", "名字", "性别", "年龄", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-d\t%-10s\t%-10s\t%-d\t%-12s\t%-20s\n", i, pc->date[i].name,
			                                              pc->date[i].sex,
			                                              pc->date[i].age,
			                                              pc->date[i].tele,
			                                              pc->date[i].addr);

	}
}



//删除联系人

int search_contact(Contact* pc, char* tmp)
{
	assert(tmp && pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->date[i].name, tmp) == 0)
		{
			return i;
		}
	}

	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	char tmp[NAME_MAX] = { 0 };

	if (pc->count == 0)
	{
		printf("通讯录为空\n\n");
		return;
	}

	printf("请输入删除人名字>:");
	scanf("%s", tmp);
	int pos = search_contact(pc, tmp);

	if (pos == -1)
	{
		printf("联系人不存在\n\n\n");

	}
	else
	{
		int i = 0;
		for (i = pos; i < pc->count-1; i++)
		{
			pc->date[i] = pc->date[i + 1];
		}
		printf("删除成功\n\n\n\n");
		pc->count--;
	}
}




//查找联系人

void search_by_name(const Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入被查找人的姓名>:");
	scanf("%s", name);

	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(name, pc->date[i].name) == 0)
		{
			printf("%-2s\t%-10s\t%-10s\t%-5s\t%-12s\t%-20s\n", "序号", "名字", "性别", "年龄", "电话", "地址");
			printf("%-d\t%-10s\t%-10s\t%-d\t%-12s\t%-20s\n\n\n", i, pc->date[i].name,
																pc->date[i].sex,
																pc->date[i].age,
																pc->date[i].tele,
																pc->date[i].addr);
			return;
		}
	}

	printf("该联系人不存在\n\n\n");
}

void search_by_tele(const Contact* pc)
{
	int tele[12] = { 0 };
	printf("请输入被查找人电话>:");
	scanf("%d", tele);

	int i = 0;
	int j = 0;
	int count = 0;

	for (i = 0; i < pc->count; i++)
	{
		for (j = 0; i < 12; j++)
		{
			if (pc->date[i].tele[j] == tele[j])
			{

				if (count == 12)
				{
					printf("%-2s\t%-10s\t%-10s\t%-5s\t%-12s\t%-20s\n", "序号", "名字", "性别", "年龄", "电话", "地址");
					printf("%-d\t%-10s\t%-10s\t%-d\t%-12s\t%-20s\n\n\n", i, pc->date[i].name,
																		pc->date[i].sex,
																		pc->date[i].age,
																		pc->date[i].tele,
																		pc->date[i].addr);
					return;
				}
				count++;
				
			}

		}
	}

	printf("该联系人不存在\n\n\n");
}

enum search
{
	Exit,
	name,
	tele

};

void menu_search()
{
	printf("************************************\n");
	printf("******1. name       2. tele  *******\n");
	printf("******0. Exit               ********\n");
	printf("************************************\n");

}


void SearchContact(const Contact* pc)
{
	assert(pc);
	int input = 0;

	if (pc->count == 0)
	{
		printf("通讯录为空\n\n\n");
		return;
	}

	do
	{
		menu_search();
		printf("请输入查找模式>:");
		scanf("%d", &input);

		switch (input)
		{
		case name:
			search_by_name(pc);
			break;
		case tele:
			search_by_tele(pc);
			break;
		case Exit:
			printf("退出查找\n\n");
			break;
		default :
			printf("输入有误，请重新输入\n\n\n");
			break;
		}

	} while (input);
}