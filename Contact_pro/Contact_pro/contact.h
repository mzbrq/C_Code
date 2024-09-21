#pragma once

//ͷ�ļ�

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<assert.h>

//
#define MAX 3
#define NAME_MAX 10
#define SEX_MAX 10
#define ADDR_MAX 20

//�˵���Ϣ

typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[12];
	char addr[ADDR_MAX];
}PeoInfo;


//ͨѶ¼
typedef struct Contact
{
	PeoInfo* date;
	int count;
	int capacity;
}Contact;



//��ʼ������
void InitContact(Contact* pc);

//����ͨѶ¼��Ϣ
void AddContact(Contact* pc);

//չʾͨѶ¼
void ShowContact(const Contact* pc);

//����ͨѶ¼
void DestoryContact(Contact* pc);

//ɾ����ϵ��
void DelContact(Contact* pc);

//������ϵ��
void SearchContact(Contact* pc);

//�޸���ϵ��

void AmendContact(Contact* pc);

//����ͨѶ¼
void SortContact(Contact* pc);

//����ͨѶ¼
void SaveContact(Contact* pc);

//����ͨѶ¼
void LoadContact(Contact* pc);