#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void InitContact(Con* pc)
{
	assert(pc);

	pc->count = 0;
	memset(pc->date, 0, MAX_CAPACITY * sizeof(Peo));
}

void AddContact(Con* pc)
{
	assert(pc);

	printf("����������:>");
	scanf("%s",pc->date[pc->count].name);

	printf("����������:>");
	scanf("%d", &(pc->date[pc->count].age));

	printf("�������Ա�:>");
	scanf("%s", pc->date[pc->count].sex);

	printf("������绰:>");
	scanf("%s", pc->date[pc->count].tele);

	printf("�������ַ:>");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
}

void ShowContact(Con* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s %-5s %-5s %-20s %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < (pc->count); i++)
	{
		printf("%-20s %-5d %-5s %-20s %-20s\n", pc->date[i].name, 
			                       pc->date[i].age, 
			                       pc->date[i].sex, 
			                       pc->date[i].tele, 
			                       pc->date[i].addr);

	}
}

int FindByName(Con* pc, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			return i;
		}
	}

	return -1;
}

void DelContact(Con* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ���˵�����>:");
	scanf("%s", name);
	int pose = FindByName(pc, name);
	if (pose == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int i = 0;
		for (i = pose; i < (pc->count) - 1; i++)
		{
			pc->date[i] = pc->date[i + 1];
		}
		pc->count--;
	}
}

void SearchContact(Con* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pose = FindByName(pc, name);
	if (pose == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s %-5s %-5s %-20s %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s %-5d %-5s %-20s %-20s\n", pc->date[pose].name,
												pc->date[pose].age,
												pc->date[pose].sex,
												pc->date[pose].tele,
												pc->date[pose].addr);
	}
}

int Cmp_By_Name(const void* p1, const void* p2)
{
	return strcmp(((Peo*)p1)->name, ((Peo*)p2)->name);
}

void SortContact(Con* pc)
{
	assert(pc);
	qsort(pc->date, pc->count, sizeof(Peo), Cmp_By_Name);
	printf("����ɹ�\n");
}

void ModifyContact(Con* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", name);
	int pose = FindByName(pc, name);
	if (pose == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->date[pose].name);

		printf("����������:>");
		scanf("%d", &(pc->date[pose].age));

		printf("�������Ա�:>");
		scanf("%s", pc->date[pose].sex);

		printf("������绰:>");
		scanf("%s", pc->date[pose].tele);

		printf("�������ַ:>");
		scanf("%s", pc->date[pose].addr);

		printf("�޸ĳɹ�\n");
	}

}

