#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//��ʼ������

void InitContact(Contact* pc)
{
	memset(pc->date, 0, sizeof(pc->date));
	pc->count = 0;

}


//AddContact
void AddContact(Contact* pc)
{
	assert(pc);

	if (pc->count == MAX)
	{
		printf("ͨѶ¼��������\n\n\n\n");
		return;
	}

	printf("���������������\n");
	scanf("%s", pc->date[pc->count].name);

	printf("���������������\n");
	scanf("%d", &(pc->date[pc->count].age));

	printf("������������Ա�\n");
	scanf("%s", pc->date[pc->count].sex);

	printf("����������˵绰\n");
	scanf("%s", pc->date[pc->count].tele);

	printf("����������˵�ַ\n");
	scanf("%s", pc->date[pc->count].addr);

	printf("��ӳɹ�\n\n\n\n");
	pc->count++;
	
}


//ShowContact

void ShowContact(const Contact* pc)
{
	int i = 0;

	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n\n\n\n");
		return;
	}

	printf("%-5s\t%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "���", "����", "����", "�Ա�", "�绰", "��ַ");

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
		printf("ͨѶ¼Ϊ��\n\n\n\n");
		return;
	}

	//����
	char Name[10] = { 0 };
	int i = 0;
	printf("��������Ҫɾ��������>:");
	scanf("%s", Name);
	int pos = find_name(pc, Name);

	if (pos == -1)
	{
		printf("�����ڸ���ϵ��\n\n\n\n");
	}
	else
	{
		//ɾ��
		for (i = pos; i < pc->count-1; i++)
		{
			pc->date[i] = pc->date[i + 1];
		}

		pc->count--;
		printf("ɾ���ɹ�\n\n\n\n");

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
	printf("��������Ҫɾ��������>:");
	scanf("%s", name);

	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			printf("%-5s\t%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "���", "����", "����", "�Ա�", "�绰", "��ַ");

			printf("%d\t%-10s\t%d\t%-5s\t%-12s\t%-20s\n\n\n\n", i, pc->date[i].name,
				                                           pc->date[i].age,
				                                           pc->date[i].sex,
				                                           pc->date[i].tele,
				                                           pc->date[i].addr);

			return;
		}
		
	}

	printf("���ֲ�����\n\n\n");
}

void SeaContact(Contact* pc)
{
	assert(pc);

	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n\n\n\n");
		return;
	}

	//����
	int input = 0;

	do
	{
		menu2();
		printf("��ѡ����ҷ�ʽ>:\n");
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
			printf("�˳�����\n");
			break;
		default:
			printf("�������\n");
			break;

		}

	} while (input);
}

