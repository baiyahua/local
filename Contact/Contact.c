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

	printf("请输入姓名:>");
	scanf("%s",pc->date[pc->count].name);

	printf("请输入年龄:>");
	scanf("%d", &(pc->date[pc->count].age));

	printf("请输入性别:>");
	scanf("%s", pc->date[pc->count].sex);

	printf("请输入电话:>");
	scanf("%s", pc->date[pc->count].tele);

	printf("请输入地址:>");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
}

void ShowContact(Con* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s %-5s %-5s %-20s %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
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
	printf("请输入要删除人的名字>:");
	scanf("%s", name);
	int pose = FindByName(pc, name);
	if (pose == -1)
	{
		printf("要删除的人不存在\n");
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
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pose = FindByName(pc, name);
	if (pose == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s %-5s %-5s %-20s %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
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
	printf("排序成功\n");
}

void ModifyContact(Con* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字\n");
	scanf("%s", name);
	int pose = FindByName(pc, name);
	if (pose == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", pc->date[pose].name);

		printf("请输入年龄:>");
		scanf("%d", &(pc->date[pose].age));

		printf("请输入性别:>");
		scanf("%s", pc->date[pose].sex);

		printf("请输入电话:>");
		scanf("%s", pc->date[pose].tele);

		printf("请输入地址:>");
		scanf("%s", pc->date[pose].addr);

		printf("修改成功\n");
	}

}

