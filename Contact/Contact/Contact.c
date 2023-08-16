#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

//静态的版本
//void InitContact(Con* pc)
//{
//	assert(pc);
//
//	pc->count = 0;
//	memset(pc->date, 0, pc->capacity * sizeof(Peo));
//}

void IncreaseContact(Con* pc)
{
	if (pc->capacity == pc->count)
	{
		Peo* ptr = (Peo*)realloc(pc->date, (DEFAULT_SZ + INC_SZ) * sizeof(Peo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		pc->date = ptr;
		pc->capacity += INC_SZ;
		printf("增容成功\n");
	}
}

//动态的版本
void InitContact(Con* pc)
{
	assert(pc);

	pc->count = 0;
	pc->date = (Peo*)calloc(DEFAULT_SZ, sizeof(Peo));
	if (pc->date == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return;
	}
	pc->capacity = DEFAULT_SZ;

	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}

	Peo tmp = { 0 };

	while (fread(&tmp, sizeof(Peo), 1, pf) == 1)
	{
		IncreaseContact(pc);
		pc->date[pc->count] = tmp;
		pc->count++;
	}
	
}

//静态的版本
//void AddContact(Con* pc)
//{
//	assert(pc);
//
//	if (pc->count == MAX_CAPACITY)
//	{
//		printf("通讯录已满\n");
//		return;
//	}
//
//	printf("请输入姓名:>");
//	scanf("%s",pc->date[pc->count].name);
//
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->date[pc->count].age));
//
//	printf("请输入性别:>");
//	scanf("%s", pc->date[pc->count].sex);
//
//	printf("请输入电话:>");
//	scanf("%s", pc->date[pc->count].tele);
//
//	printf("请输入地址:>");
//	scanf("%s", pc->date[pc->count].addr);
//
//	pc->count++;
//}

//动态的版本
void AddContact(Con* pc)
{
	assert(pc);

	//增容
	IncreaseContact(pc);

	printf("请输入姓名:>");
	scanf("%s", pc->date[pc->count].name);

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

void SaveContact(Con* pc)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(&(pc->date[i]), sizeof(Peo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}

void DestroyContact(Con* pc)
{
	assert(pc);

	free(pc->date);
	pc->date = NULL;
}

