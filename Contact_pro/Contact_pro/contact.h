#pragma once

//头文件

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//
#define MAX 3
#define NAME_MAX 10
#define SEX_MAX 5
#define ADDR_MAX 20

//人的信息

typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[12];
	char addr[ADDR_MAX];
}PeoInfo;


//通讯录
typedef struct Contact
{
	PeoInfo* date;
	int count;
	int capacity;
}Contact;



//初始化函数
void InitContact(Contact* pc);

//添加通讯录信息
void AddContact(Contact* pc);

//展示通讯录
void ShowContact(const Contact* pc);
