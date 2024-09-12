#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//初始化函数

//静态版本

//void InitContact(Contact* pc)
//{
//	memset(pc->date, 0, sizeof(pc->date));
//	pc->count = 0;
//
//}

//动态版本

void InitContact(Contact* pc)
{
	assert(pc);

	pc->date = (PeoInfo*)calloc(INIT_NUM, sizeof(PeoInfo));

	if (pc->date == NULL)
	{
		printf("InitContact::%s\n\n", strerror(errno));
	}

	pc->count = 0;
	pc->capacity = 3;

}

//DestroyContact
void DestroyContact(Contact* pc)
{
	assert(pc);

	free(pc->date);
	pc->date = NULL;
}


//AddContact

void Addcapacity(Contact* pc)
{
	PeoInfo* ptr = (PeoInfo*)realloc(pc->date, (pc->count + ADD_capacity) * sizeof(PeoInfo));

	if (ptr == NULL)
	{
		printf("Addcapacity::%s\n\n", strerror(errno));
		printf("增容失败\n\n\n");
	}
	else
	{
		pc->date = ptr;
		pc->capacity += ADD_capacity;
		printf("增容成功\n\n\n");

	}
}

void AddContact(Contact* pc)
{
	assert(pc);

	//判断
	if (pc->count == pc->capacity)
	{
		//增容
		Addcapacity(pc);
	}

	printf("请输入添加人名字\n");
	scanf("%s", pc->date[pc->count].name);

	printf("请输入添加人年龄\n");
	scanf("%d", &(pc->date[pc->count].age));

	printf("请输入添加人性别\n");
	scanf("%s", pc->date[pc->count].sex);

	printf("请输入添加人电话\n");
	scanf("%s", pc->date[pc->count].tele);

	printf("请输入添加人地址\n");
	scanf("%s", pc->date[pc->count].addr);

	printf("添加成功\n\n\n\n");
	pc->count++;
	
}


//ShowContact

void ShowContact(const Contact* pc)
{
	int i = 0;

	if (pc->count == 0)
	{
		printf("通讯录为空\n\n\n\n");
		return;
	}

	printf("%-5s\t%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "序号", "名字", "年龄", "性别", "电话", "地址");

	for (i = 0; i < pc->count; i++)
	{
		printf("%d\t%-10s\t%d\t%-5s\t%-12s\t%-20s\n", i, pc->date[i].name,
	                                                 pc->date[i].age,
	                                                 pc->date[i].sex,
	                                                 pc->date[i].tele,
	                                                 pc->date[i].addr);

	}
	printf("\n\n\n\n");
}



//DelContact

static int find_name(Contact* pc, char Name[])
{
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->date[i].name, Name) == 0)
		{
			return i;
		}
	}

	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);

	if (pc->count == 0)
	{
		printf("通讯录为空\n\n\n\n");
		return;
	}

	//查找
	char Name[10] = { 0 };
	int i = 0;
	printf("请输入需要删除人名字>:");
	scanf("%s", Name);
	int pos = find_name(pc, Name);

	if (pos == -1)
	{
		printf("不存在该联系人\n\n\n\n");
	}
	else
	{
		//删除
		for (i = pos; i < pc->count-1; i++)
		{
			pc->date[i] = pc->date[i + 1];
		}

		pc->count--;
		printf("删除成功\n\n\n\n");

	}

}



//SeaContact

void menu2()
{
	printf("*****************************\n");
	printf("******1. name    2. tele*****\n");
	printf("******3. address 0. exit*****\n");
	printf("*****************************\n");
}

static void find_Name(Contact* pc)
{
	char name[10] = { 0 };
	int i = 0;
	printf("请输入需要删除人名字>:");
	scanf("%s", name);

	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			printf("%-5s\t%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "序号", "名字", "年龄", "性别", "电话", "地址");

			printf("%d\t%-10s\t%d\t%-5s\t%-12s\t%-20s\n\n\n\n", i, pc->date[i].name,
				                                           pc->date[i].age,
				                                           pc->date[i].sex,
				                                           pc->date[i].tele,
				                                           pc->date[i].addr);

			return;
		}
		
	}

	printf("名字不存在\n\n\n");
}

void SeaContact(Contact* pc)
{
	assert(pc);

	if (pc->count == 0)
	{
		printf("通讯录为空\n\n\n\n");
		return;
	}

	//查找
	int input = 0;

	do
	{
		menu2();
		printf("请选择查找方式>:\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			find_Name(pc);
			break;
		case 2:
			//find_tele(pc);
			break;
		case 3:
			//find_addrss(pc);
			break;
		case 0:
			printf("退出查找\n");
			break;
		default:
			printf("输入错误\n");
			break;

		}

	} while (input);
}





//AmeContact
void AmeContact(Contact* pc)
{
	assert(pc);

	if (pc->count == 0)
	{
		printf("通讯录为空\n\n\n\n");
		return;
	}

	char name[10] = { 0 };
	printf("请输入被修改人名字>:");
	scanf("%s", name);
	int pos = find_name(pc, name);

	if (pos == -1)
	{
		printf("联系人不存在\n\n\n");
		return;
	}
	else
	{
		//修改
		printf("请输入修改人名字\n");
		scanf("%s", pc->date[pos].name);

		printf("请输入修改人年龄\n");
		scanf("%d", &(pc->date[pos].age));

		printf("请输入修改人性别\n");
		scanf("%s", pc->date[pos].sex);

		printf("请输入修改人电话\n");
		scanf("%s", pc->date[pos].tele);

		printf("请输入修改人地址\n");
		scanf("%s", pc->date[pos].addr);

		printf("修改成功!\n\n\n\n");
		
	}
}




//SortContact

int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(const Contact* pc)
{
	assert(pc);

	if (pc->count == 0)
	{
		printf("通讯录为空\n\n\n");
		return;
	}

	qsort(pc->date, pc->count, sizeof(PeoInfo), cmp_by_name);

	printf("排序成功\n\n\n\n");


}

