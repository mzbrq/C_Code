#pragma once

//ͷ�ļ�

#include<stdio.h>
#include<string.h>
#include<assert.h>

//
#define MAX 100
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20

//�ṹ������


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
	PeoInfo date[MAX];
	int count;
}Contact;


//��ʼ������
void InitContact(Contact* pc);

//AddContact
void AddContact(Contact* pc);

//ShowContact
void ShowContact(const Contact* pc);

//DelContact
void DelContact(Contact* pc);

//SeaContact
void SeaContact(Contact* pc);


