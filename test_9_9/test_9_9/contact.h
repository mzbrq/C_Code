#pragma once

//头文件

#include<stdio.h>
#include<string.h>
#include<assert.h>

//
#define MAX 100
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20

//结构体申明


//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//通讯录

typedef struct Contact
{
	PeoInfo date[MAX];
	int count;
}Contact;


//初始化函数
void InitContact(Contact* pc);

//AddContact
void AddContact(Contact* pc);

//ShowContact
void ShowContact(const Contact* pc);

//DelContact
void DelContact(Contact* pc);

//SeaContact
void SeaContact(Contact* pc);


