#pragma once

//头文件

#include<stdio.h>
#include<string.h>
#include<assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//类型申明

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
	PeoInfo date[100];//人的信息
	int count;//当前实际人数
}Contact;


//初始化函数
void InitContact(Contact* pc);

//添加通讯录信息
void AddContact(Contact* pc);

//展示通讯录
void ShowContact(const Contact* pc);

//删除通讯录信息
void DelContact(Contact* pc);

//搜索通讯录信息
//void SeaContact(Contact* pa);

//排序通讯录信息
//void SortContact(Contact* pc);