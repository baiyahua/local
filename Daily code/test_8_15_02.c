#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//void Getmemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void test1()
//{
//	char* str = NULL;
//	Getmemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//char* Getmemory()
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void test2()
//{
//	char* str = NULL;
//	str = Getmemory();
//	printf(str);
//}

//int* test3()
//{
//	int a = 10;
//	return &a;
//}

//void Getmemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void test4()
//{
//	char* str = NULL;
//	Getmemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}

//void test5()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}

typedef struct type_a
{
	int i;
	int a[];
}type_a;

int main()
{
	type_a* p = (type_a*)malloc(sizeof(type_a) + 10 * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int j = 0;
	p->i = 100;
	for (j = 0; j < 10; j++)
	{
		p->a[j] = j;
	}
	for (j = 0; j < 10; j++)
	{
		printf("%d ", p->a[j]);
	}

	//À©ÈÝ
	type_a* ptr = (type_a*)realloc(p->a, sizeof(type_a) + 20 * sizeof(int));
	if (ptr == NULL)
	{
		return 1;
	}
	//...Ê¹ÓÃ
	free(p->a);
	free(p);
	p = NULL;

	return 0;
}

//typedef struct type_a
//{
//	int i;
//	int* p;
//}type_a;
//
//int main()
//{
//	type_a* ptr = (type_a*)malloc(sizeof(type_a));
//
//	ptr->p = (int*)malloc(10 * sizeof(int));
//	if (ptr->p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		ptr->p[j] = j;
//	}
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", ptr->p[j]);
//	}
//	free(ptr->p);
//	free(ptr);
//	ptr = NULL;
//
//	return 0;
//}