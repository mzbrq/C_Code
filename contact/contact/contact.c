#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//��ʼ������

void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->date, 0, sizeof(pc->date));
}

//���ͨѶ¼��Ϣ

void AddContact(Contact* pc)
{
	if (pc->count == MAX)
	{
		printf("��������\n");
		return;
	}

	//���
	printf("���������:>\n");
	scanf("%s", pc->date[pc->count].name);

	printf("���������:>\n");
	scanf("%d", &(pc->date[pc->count].age));

	printf("������Ա�:>\n");
	scanf("%s", pc->date[pc->count].sex);

	printf("����ӵ绰:>\n");
	scanf("%s", pc->date[pc->count].tele);

	printf("����ӵ�ַ:>\n");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("��ӳɹ�\n\n\n");
}



//չʾͨѶ¼

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("\t%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");

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


//ɾ��ͨѶ¼��Ϣ

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
		printf("ͨѶ¼Ϊ���޿�ɾ��\n");
		return;
	}

	printf("��������Ҫɾ������>:\n");
	scanf("%s", name);

	//����
	int pos = find_name(name, pc);
	
	if (pos == -1)
	{
		printf("��Ҫɾ����ϵ�˲�����\n");
		return;
	}
	else
	{
		//ɾ��
		for (i = pos; i < (pc->count)-1; i++)
		{
			pc->date[i] = pc->date[i + 1];

		}

		pc->count--;
		printf("ɾ���ɹ�\n");
	}

}
