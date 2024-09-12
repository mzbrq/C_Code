#pragma once

//头文件

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

//
#define MAX 100
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20
#define ADD_capacity 3
#define INIT_NUM 3

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

//静态版本

//typedef struct Contact
//{
//	PeoInfo date[MAX];
//	int count;
//}Contact;

//动态版本

typedef struct Contact
{
	PeoInfo* date;
	int count;//人数
	int capacity;//容量
}Contact;


//初始化函数
void InitContact(Contact* pc);

//DestroyContact
void DestroyContact(Contact* pc);

//AddContact
void AddContact(Contact* pc);

//ShowContact
void ShowContact(const Contact* pc);

//DelContact
void DelContact(Contact* pc);

//SeaContact
void SeaContact(Contact* pc);

//AmeContact
void AmeContact(Contact* pc);

//Sort
void SortContact(const Contact* pc);

