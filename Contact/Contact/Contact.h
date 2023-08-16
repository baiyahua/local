#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

#define MAX_CAPACITY 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 20
#define MAX_ADDR 50
#define DEFAULT_SZ 3
#define INC_SZ 2

typedef struct Peo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peo;

//��̬�İ汾
//typedef struct Con
//{
//	Peo date[MAX_CAPACITY];
//	int count;
//}Con;

//��̬�İ汾
typedef struct Con
{
	Peo* date;
	int count;
	int capacity;
}Con;

//��ʼ��ͨѶ¼
void InitContact(Con* pc);

//������ϵ��
void AddContact(Con* pc);

//��ӡͨѶ¼
void ShowContact(Con* pc);

//ɾ����ϵ��
void DelContact(Con* pc);

//������ϵ��
void SearchContact(Con* pc);

//����ͨѶ¼
void SortContact(Con* pc);

//�޸���ϵ��
void ModifyContact(Con* pc);

//����ͨѶ¼
void DestroyContact(Con* pc);

//��������
void SaveContact(Con* pc);
