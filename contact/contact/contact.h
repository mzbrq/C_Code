#pragma once

//ͷ�ļ�

#include<stdio.h>
#include<string.h>
#include<assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//��������

//�˵���Ϣ

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//ͨѶ¼

typedef struct Contact
{
	PeoInfo date[100];//�˵���Ϣ
	int count;//��ǰʵ������
}Contact;


//��ʼ������
void InitContact(Contact* pc);

//���ͨѶ¼��Ϣ
void AddContact(Contact* pc);

//չʾͨѶ¼
void ShowContact(const Contact* pc);

//ɾ��ͨѶ¼��Ϣ
void DelContact(Contact* pc);

//����ͨѶ¼��Ϣ
//void SeaContact(Contact* pa);

//����ͨѶ¼��Ϣ
//void SortContact(Contact* pc);