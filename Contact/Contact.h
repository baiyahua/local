#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX_CAPACITY 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 20
#define MAX_ADDR 50

typedef struct Peo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peo;

typedef struct Con
{
	Peo date[MAX_CAPACITY];
	int count;
}Con;

//初始化通讯录
void InitContact(Con* pc);

//增加联系人
void AddContact(Con* pc);

//打印通讯录
void ShowContact(Con* pc);

//删除联系人
void DelContact(Con* pc);

//查找联系人
void SearchContact(Con* pc);

//排序通讯录
void SortContact(Con* pc);

//修改联系人
void ModifyContact(Con* pc);
