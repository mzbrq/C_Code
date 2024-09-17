#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//��ʼ������
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

//����ͨѶ¼
void DestoryContact(Contact* pc)
{
	assert(pc);
	free(pc->date);
	pc->date = NULL;
}



//���ͨѶ¼��Ϣ

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
	printf("���ݳɹ�\n\n\n\n");
}

void AddContact(Contact* pc)
{
	assert(pc);

	if (pc->count == pc->capacity)
	{
		//����
		AddCapacity(pc);
	}

	printf("����������˵�����\n");
	scanf("%s", pc->date[pc->count].name);

	printf("����������˵��Ա�\n");
	scanf("%s", pc->date[pc->count].sex);

	printf("����������˵�����\n");
	scanf("%d", &pc->date[pc->count].age);

	printf("����������˵ĵ绰\n");
	scanf("%s", pc->date[pc->count].tele);

	printf("����������˵ĵ�ַ\n");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("��ӳɹ�\n\n\n");
	
}





//չʾͨѶ¼
void ShowContact(const Contact* pc)
{
	assert(pc);

	int i = 0;
	printf("%-2s\t%-10s\t%-10s\t%-5s\t%-12s\t%-20s\n", "���", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-d\t%-10s\t%-10s\t%-d\t%-12s\t%-20s\n", i, pc->date[i].name,
			                                              pc->date[i].sex,
			                                              pc->date[i].age,
			                                              pc->date[i].tele,
			                                              pc->date[i].addr);

	}
}



//ɾ����ϵ��

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
		printf("ͨѶ¼Ϊ��\n\n");
		return;
	}

	printf("������ɾ��������>:");
	scanf("%s", tmp);
	int pos = search_contact(pc, tmp);

	if (pos == -1)
	{
		printf("��ϵ�˲�����\n\n\n");

	}
	else
	{
		int i = 0;
		for (i = pos; i < pc->count-1; i++)
		{
			pc->date[i] = pc->date[i + 1];
		}
		printf("ɾ���ɹ�\n\n\n\n");
		pc->count--;
	}
}




//������ϵ��

void search_by_name(const Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("�����뱻�����˵�����>:");
	scanf("%s", name);

	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(name, pc->date[i].name) == 0)
		{
			printf("%-2s\t%-10s\t%-10s\t%-5s\t%-12s\t%-20s\n", "���", "����", "�Ա�", "����", "�绰", "��ַ");
			printf("%-d\t%-10s\t%-10s\t%-d\t%-12s\t%-20s\n\n\n", i, pc->date[i].name,
																pc->date[i].sex,
																pc->date[i].age,
																pc->date[i].tele,
																pc->date[i].addr);
			return;
		}
	}

	printf("����ϵ�˲�����\n\n\n");
}

void search_by_tele(const Contact* pc)
{
	int tele[12] = { 0 };
	printf("�����뱻�����˵绰>:");
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
					printf("%-2s\t%-10s\t%-10s\t%-5s\t%-12s\t%-20s\n", "���", "����", "�Ա�", "����", "�绰", "��ַ");
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

	printf("����ϵ�˲�����\n\n\n");
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
		printf("ͨѶ¼Ϊ��\n\n\n");
		return;
	}

	do
	{
		menu_search();
		printf("���������ģʽ>:");
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
			printf("�˳�����\n\n");
			break;
		default :
			printf("������������������\n\n\n");
			break;
		}

	} while (input);
}