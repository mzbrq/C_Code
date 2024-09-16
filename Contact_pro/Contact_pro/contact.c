#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//��ʼ������
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



//���ͨѶ¼��Ϣ

void AddCapacity(Contact* pc)
{
	PeoInfo* str = (PeoInfo*)realloc(pc->date, (pc->count + 3) * sizeof(PeoInfo));
	if (str == NULL)
	{
		perror("AddCapacity");
		return;
	}

	pc->capacity = pc->count + 3;
	printf("���ݳɹ�\n\n\n\n");
}

void AddContact(Contact* pc)
{
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
	int i = 0;
	printf("%2s\t%-10s\t%-5s\t%-s\t%-12s\t%-20s\n", "���", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-d\t%-10s\t%-5s\t%-d\t%-12s\t%-20s\n", i, pc->date[i].name,
			                                              pc->date[i].sex,
			                                              pc->date[i].age,
			                                              pc->date[i].tele,
			                                              pc->date[i].addr);

	}
}
