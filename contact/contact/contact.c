#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//初始化函数

void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->date, 0, sizeof(pc->date));
}

//添加通讯录信息

void AddContact(Contact* pc)
{
	if (pc->count == MAX)
	{
		printf("人数已满\n");
		return;
	}

	//添加
	printf("请添加名字:>\n");
	scanf("%s", pc->date[pc->count].name);

	printf("请添加年龄:>\n");
	scanf("%d", &(pc->date[pc->count].age));

	printf("请添加性别:>\n");
	scanf("%s", pc->date[pc->count].sex);

	printf("请添加电话:>\n");
	scanf("%s", pc->date[pc->count].tele);

	printf("请添加地址:>\n");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("添加成功\n\n\n");
}



//展示通讯录

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("\t%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");

	for (i = 0; i < pc->count; i++)
	{
		printf("%d\t%-20s\t%-5d\t%-10s\t%-12s\t%-30s\n",i, 
			                                       pc->date[i].name,
			                                       pc->date[i].age,
			                                       pc->date[i].sex,
			                                       pc->date[i].tele,
			                                       pc->date[i].addr);
	}
	printf("\n");

}


//删除通讯录信息

static int find_name(char name[], Contact* pc)
{
	assert(pc);
	int i = 0;

	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			return i;
		}
	}

	return -1;
	
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	int i = 0;
	assert(pc);

	if (pc->count == 0)
	{
		printf("通讯录为，无可删除\n");
		return;
	}

	printf("请输入需要删除名字>:\n");
	scanf("%s", name);

	//查找
	int pos = find_name(name, pc);
	
	if (pos == -1)
	{
		printf("需要删除联系人不存在\n");
		return;
	}
	else
	{
		//删除
		for (i = pos; i < (pc->count)-1; i++)
		{
			pc->date[i] = pc->date[i + 1];

		}

		pc->count--;
		printf("删除成功\n");
	}

}
