#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//初始化函数
void InitContact(Contact* pc)
{
	pc->date = (PeoInfo*)calloc(MAX, sizeof(PeoInfo));
	if (pc->date == NULL)
	{
		perror("InitContact");
		return;
	}

	pc->count = 0;
	pc->capacity = MAX;

}



//添加通讯录信息

void AddCapacity(Contact* pc)
{
	PeoInfo* str = (PeoInfo*)realloc(pc->date, (pc->count + 3) * sizeof(PeoInfo));
	if (str == NULL)
	{
		perror("AddCapacity");
		return;
	}

	pc->capacity = pc->count + 3;
	printf("增容成功\n\n\n\n");
}

void AddContact(Contact* pc)
{
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
	int i = 0;
	printf("%2s\t%-10s\t%-5s\t%-s\t%-12s\t%-20s\n", "序号", "名字", "性别", "年龄", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-d\t%-10s\t%-5s\t%-d\t%-12s\t%-20s\n", i, pc->date[i].name,
			                                              pc->date[i].sex,
			                                              pc->date[i].age,
			                                              pc->date[i].tele,
			                                              pc->date[i].addr);

	}
}
