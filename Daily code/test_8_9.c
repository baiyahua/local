#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>
//struct Stu
//{
//	char name[20];
//	int age;
//}s;

//struct Stu
//{
//	char name[20];
//	int age;
//};

//struct link
//{
//	int date;
//	struct link* next;
//};

//struct M
//{
//	char a;
//	int b;
//	struct Stu;
//};

//#pragma pack(1)
//struct Stu
//{
//	char i;
//	int j;
//};
//#pragma pack()

//void print1(struct Stu s)
//{
//	printf("%s %d", s.name, s.age);
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};

//void print2(struct Stu* ps)
//{
//	printf("%s %d", ps->name, ps->age);
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//};

//enum Day
//{
//	Monday = 1,
//	Tuesday,
//	Wednesday,
//	Thusday,
//	Friday,
//	Satday,
//	Sunday
//};

//union Un
//{
//	int i;
//	char c;
//};

//int test()
//{
//	int i = 1;
//	return (char)i;
//}

union U
{
	int i;
	char c;
};

int test()
{
	union U u;
	u.i = 1;

	return u.c;
}

int main()
{
	int ret = test();
	if (ret == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}

	return 0;
}